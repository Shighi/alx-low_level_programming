# C - Hash Tables

A hash table implementation in C, featuring both standard and sorted hash tables.

## Features

* Create and manage hash tables
* Insert and retrieve key-value pairs
* Handle collisions using chaining
* Print table contents
* Sorted hash table implementation with ordered iteration

## Files

* `hash_tables.h` - Header file with structures and prototypes
* `0-hash_table_create.c` - Creates a hash table
* `1-djb2.c` - Hash function implementation
* `2-key_index.c` - Gets array index for a key
* `3-hash_table_set.c` - Adds/updates elements
* `4-hash_table_get.c` - Retrieves elements
* `5-hash_table_print.c` - Prints the hash table
* `6-hash_table_delete.c` - Frees the hash table
* `100-sorted_hash_table.c` - Sorted hash table implementation

## Compilation

```bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 *.c -o hash_table
```
