#include <stdlib.h>
#include "lists.h"

/**
 * free_listint_safe - frees a listint_t list safely
 * @h: pointer to pointer to the head of the list
 * Return: the size of the list that was freed
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *slow = *h, *fast = *h, *temp;
	size_t count = 0;
	int loop = 0;

	if (!h || !*h)
		return (0);

	while (slow && fast && fast->next)
	{
		slow = slow->next;
		fast = fast->next->next;
		if (slow == fast)
		{
			loop = 1;
			break;
		}
	}

	if (!loop)
	{
		while (*h)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
			count++;
		}
	}
	else
	{
		do {
			temp = (*h)->next;
			free(*h);
			*h = temp;
			count++;
		} while (*h != slow);
		*h = NULL;
	}

	return (count);
}
