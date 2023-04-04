#include "lists.h"

/**
 * sum_listint - Sum of all the data (n) of a listint_t linked lists.
 * @head: The pointer to the first node.
 *
 * Return: Sum all the data.
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum = head->n;
		head = head->next;
	}
	return (sum);
}
