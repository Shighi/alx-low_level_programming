0x17. Doubly Linked Lists
Requirements
Compiled on Ubuntu 20.04 LTS with gcc
Allowed functions: malloc, free, printf, exit
Follow Betty coding style
Header file: lists.h
Data Structure
c
Copy code
typedef struct dlistint_s
{
    int n;
    struct dlistint_s *prev;
    struct dlistint_s *next;
} dlistint_t;
Tasks
Print List: size_t print_dlistint(const dlistint_t *h);
List Length: size_t dlistint_len(const dlistint_t *h);
Add Node: dlistint_t *add_dnodeint(dlistint_t **head, const int n);
Add Node End: dlistint_t *add_dnodeint_end(dlistint_t **head, const int n);
Free List: void free_dlistint(dlistint_t *head);
Get Node at Index: dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index);
Sum List: int sum_dlistint(dlistint_t *head);
Insert Node at Index: dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n);
Delete Node at Index: int delete_dnodeint_at_index(dlistint_t **head, unsigned int index);
Palindrome: Check if list is a palindrome.
Reverse List: Reverse the doubly linked list.
Find Loop: Detect if there is a loop in the list.
Repository
Directory: 0x17-doubly_linked_lists
GitHub repo: alx-low_level_programming
