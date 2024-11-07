# Random-Array-Element-Shuffler-in-c


This program takes an array of integers input by the user and prints its elements in a random, non-repeating order. It demonstrates the use of random number generation, array handling, and uniqueness checks in C.

## Features

- Accepts an array of integers as input from the user.
- Randomly selects and prints each array element only once.
- Utilizes a uniqueness check to ensure no duplicate elements are printed in the sequence.

## Getting Started

### Prerequisites

To compile and run this program, you'll need:

- A C compiler (e.g., GCC)

### Compilation and Execution

1. **Clone the repository**:
    ```bash
    git clone https://github.com/Subhamsidhanta/random-array-element-shuffler.git
    ```



### Example

**Input:**
```plaintext
Enter how many numbers you want: 5
Enter array elements:
10 20 30 40 50
```

**Output** (randomly ordered):
```plaintext
30 50 10 40 20
```

Note: Each execution will produce a different random sequence.

  Code Explanation
    <ul>
        <li><strong>Random Number Generation:</strong> <code>srand(time(NULL))</code> initializes the random number generator based on the current time, ensuring different random sequences on each run.</li>
        <li><strong>Unique Selection:</strong> The program checks if each randomly generated index has already been used before printing, ensuring that each array element is only printed once.</li>
    </ul>
