# 0x14. C - Bit Manipulation

## Description
This project is about bit manipulation in C. It covers the following tasks:

1. **0. 0**
   - Write a function that converts a binary number to an unsigned int.
   - Prototype: `unsigned int binary_to_uint(const char *b);`
   - where `b` is pointing to a string of 0 and 1 chars
   - Return: the converted number, or 0 if
     - there is one or more chars in the string `b` that is not 0 or 1
     - `b` is `NULL`

2. **1. 1**
   - Write a function that prints the binary representation of a number.
   - Prototype: `void print_binary(unsigned long int n);`
   - Format: see example
   - You are not allowed to use arrays
   - You are not allowed to use `malloc`
   - You are not allowed to use the `%` or `/` operators

3. **2. 10**
   - Write a function that returns the value of a bit at a given index.
   - Prototype: `int get_bit(unsigned long int n, unsigned int index);`
   - where `index` is the index, starting from 0 of the bit you want to get
   - Returns: the value of the bit at index `index` or -1 if an error occurred

4. **3. 11**
   - Write a function that sets the value of a bit to 1 at a given index.
   - Prototype: `int set_bit(unsigned long int *n, unsigned int index);`
   - where `index` is the index, starting from 0 of the bit you want to set
   - Returns: 1 if it worked, or -1 if an error occurred

5. **4. 100**
   - Write a function that sets the value of a bit to 0 at a given index.
   - Prototype: `int clear_bit(unsigned long int *n, unsigned int index);`
   - where `index` is the index, starting from 0 of the bit you want to set
   - Returns: 1 if it worked, or -1 if an error occurred

6. **5. 101**
   - Write a function that returns the number of bits you would need to flip to get from one number to another.
   - Prototype: `unsigned int flip_bits(unsigned long int n, unsigned long int m);`
   - You are not allowed to use the `%` or `/` operators

7. **6. Endianness**
   - Write a function that checks the endianness.
   - Prototype: `int get_endianness(void);`
   - Returns: 0 if big endian, 1 if little endian

## Files

| File | Description |
| --- | --- |
| `0-binary_to_uint.c` | Contains the `binary_to_uint` function implementation. |
| `1-print_binary.c` | Contains the `print_binary` function implementation. |
| `2-get_bit.c` | Contains the `get_bit` function implementation. |
| `3-set_bit.c` | Contains the `set_bit` function implementation. |
| `4-clear_bit.c` | Contains the `clear_bit` function implementation. |
| `5-flip_bits.c` | Contains the `flip_bits` function implementation. |
| `100-get_endianness.c` | Contains the `get_endianness` function implementation. |
| `main.h` | Header file containing the function prototypes. |

## Compilation
All the C files should be compiled with the following options:
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c
Copy
## Usage
To use the provided functions, include the `main.h` header file in your C code and call the desired functions.

```c
#include "main.h"

int main(void)
{
    // Use the bit manipulation functions here
    return 0;
}
Authors

SHIGHI
