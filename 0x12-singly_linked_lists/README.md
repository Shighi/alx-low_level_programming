# 0x12. C - Singly Linked Lists

This project contains C programs that implement various operations on singly linked lists.

## Files

* `lists.h`: Header file containing the structure definition for the linked list and function prototypes.
* `0-print_list.c`: Function that prints all elements of a linked list.
* `1-list_len.c`: Function that returns the number of elements in a linked list.
* `2-add_node.c`: Function that adds a new node at the beginning of a linked list.
* `3-add_node_end.c`: Function that adds a new node at the end of a linked list.
* `4-free_list.c`: Function that frees a linked list.

## Compilation

To compile the programs, use:
gcc -Wall -Werror -Wextra -pedantic *.c -o [output_filename]
Copy
## Usage

Include the `lists.h` header in your C file and call the functions as needed.

Example:

```c
#include "lists.h"

int main(void)
{
    list_t *head = NULL;
    add_node(&head, "Hello");
    add_node(&head, "World");
    print_list(head);
    free_list(head);
    return (0);
}
Data Structure
cCopytypedef struct list_s
{
    char *str;
    unsigned int len;
    struct list_s *next;
} list_t;

Author
Shighi
