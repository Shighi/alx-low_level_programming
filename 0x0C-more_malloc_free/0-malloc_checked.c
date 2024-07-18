#include "main.h"
#include <stdlib.h>
#include <limits.h>

/**
 * malloc_checked - allocates memory using malloc
 * @b: number of bytes to allocate
 *
 * Return: pointer to allocated memory
 * If malloc fails, terminate process with status 98
 */
void *malloc_checked(unsigned int b)
{
void *ptr;
if (b >= INT_MAX)
exit(98);
ptr = malloc(b);
if (ptr == NULL)
exit(98);
return ptr;
}
