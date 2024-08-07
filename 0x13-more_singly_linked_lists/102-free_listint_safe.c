#include "lists.h"
#include <stdlib.h>

/**
 * free_listint_safe - Frees a listint_t list safely.
 * @h: Pointer to the pointer of the head of the list.
 *
 * Return: The size of the list that was freed.
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *current, *temp;
	size_t count = 0;
	listint_t *addresses[1024]; /* Assuming max 1024 nodes */

	if (!h || !*h)
		return (0);

	current = *h;
	while (current)
	{
		size_t i;

		for (i = 0; i < count; i++)
		{
			if (current == addresses[i])
			{
				*h = NULL;
				return (count);
			}
		}

		addresses[count] = current;
		count++;

		if (count >= 1024)
		{
			*h = NULL;
			return (count);
		}

		temp = current;
		current = current->next;
		free(temp);
	}

	*h = NULL;
	return (count);
}
