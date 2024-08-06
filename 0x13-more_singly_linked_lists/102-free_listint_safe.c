#include <stdlib.h>
#include "lists.h"

/**
 * free_listint_safe - frees a listint_t list safely
 * @h: pointer to pointer to the head of the list
 * Return: the size of the list that was freed
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *slow, *fast, *temp;
	size_t count = 0;

	if (!h || !*h)
		return (0);

	slow = fast = *h;
	while (slow && fast && fast->next)
	{
		temp = slow;
		slow = slow->next;
		fast = fast->next->next;
		count++;
		free(temp);
		if (slow == fast)
		{
			*h = NULL;
			return (count);
		}
	}
	while (slow)
	{
		temp = slow;
		slow = slow->next;
		count++;
		free(temp);
	}
	*h = NULL;
	return (count);
}
