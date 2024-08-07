#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_listint_safe - Prints a listint_t linked list safely.
 * @head: Pointer to the head of the list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *current = head;
	size_t count = 0;
	const listint_t *addresses[1024]; /* Assuming max 1024 nodes */

	while (current)
	{
		size_t i;

		for (i = 0; i < count; i++)
		{
			if (current == addresses[i])
			{
				printf("-> [%p] %d\n", (void *)current, current->n);
				return (count);
			}
		}

		printf("[%p] %d\n", (void *)current, current->n);
		addresses[count] = current;
		count++;

		if (count >= 1024)
		{
			fprintf(stderr, "Error: List too long\n");
			exit(98);
		}

		current = current->next;
	}

	return (count);
}
