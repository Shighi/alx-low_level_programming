#include "lists.h"

/**
 * sum_dlistint - Returns the sum of all data (n) of a dlistint_t linked list
 * @head: The head of the list
 *
 * Return: The sum of all data, or 0 if the list is empty
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
