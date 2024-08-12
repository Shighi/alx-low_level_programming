# 0x15. C - File I/O

## Description
This project focuses on File Input/Output operations in C. It covers how to create, open, close, read, and write files using file descriptors. The project also includes an advanced task dealing with ELF headers.

## Files
* `0-read_textfile.c`: A function that reads a text file and prints it to the POSIX standard output.
* `1-create_file.c`: A function that creates a file.
* `2-append_text_to_file.c`: A function that appends text at the end of a file.
* `3-cp.c`: A program that copies the content of a file to another file.
* `100-elf_header.c`: A program that displays the information contained in the ELF header at the start of an ELF file.
* `main.h`: The header file containing all function prototypes.

## Requirements
* Allowed editors: vi, vim, emacs
* All files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
* All files should end with a new line
* Code should use the Betty style
* No more than 5 functions per file
* The only C standard library functions allowed are malloc, free and exit
* Allowed syscalls: read, write, open, close
* All function prototypes should be included in the header file called main.h
* Don't forget to push your header file
* All header files should be include guarded

## Compilation
To compile the programs, use:
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 *.c -o output_filename
Copy
## Usage
Each program can be run from the command line after compilation. For example:
./0-read_textfile textfile 114
Copy
## Author
SHIGHI
