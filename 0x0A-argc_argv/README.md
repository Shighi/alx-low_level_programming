# Project Title

## Learning Objectives

At the end of this project, you are expected to be able to explain to anyone, without the help of Google:

### General

- **How to use arguments passed to your program:**
  - Understand the purpose of `argc` and `argv` in `main`.
  - Learn to access and manipulate the command-line arguments.
  - Examples and use cases of arguments in different scenarios.

- **What are two prototypes of `main` that you know of, and in which case do you use one or the other:**
  - `int main(void)`: Used when no command-line arguments are needed.
  - `int main(int argc, char *argv[])`: Used when the program needs to handle command-line arguments.
  - Explanation of when and why to use each prototype.

- **How to use `__attribute__((unused))` or `(void)` to compile functions with unused variables or parameters:**
  - Introduction to `__attribute__((unused))` and its usage.
  - Understanding `(void)` to cast unused variables or parameters.
  - Practical examples of suppressing compiler warnings for unused variables or parameters.

## Detailed Explanation

### Using Arguments in Your Program

When writing a program, you may need to handle inputs from the command line. This is done using the parameters `argc` (argument count) and `argv` (argument vector) in the `main` function.

Example:
```c
#include <stdio.h>

int main(int argc, char *argv[]) {
    if (argc > 1) {
        printf("The first argument is: %s\n", argv[1]);
    } else {
        printf("No arguments passed.\n");
    }
    return 0;
}

