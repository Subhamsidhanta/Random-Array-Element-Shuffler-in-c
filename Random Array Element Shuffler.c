#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int ran(int);

void main() {
    int n, a[20];
    printf("Enter how many numbers you want: ");
    scanf("%d", &n);
    printf("Enter array elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    // Seed the random number generator once
    srand(time(NULL));

    int selected = 0, sa[20] = {0};
    while (selected < n) {
        int number = ran(n);
        
        // Check if number is already selected
        int is_unique = 1;
        for (int j = 0; j < selected; j++) {
            if (number == sa[j]) {
                is_unique = 0;
                break;
            }
        }

        if (is_unique) {
            sa[selected] = number;
            printf(" %d ", a[number]);
            selected++;
        }
    }
}

int ran(int n) {
    return rand() % n;
}
