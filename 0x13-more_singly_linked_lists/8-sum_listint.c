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
	listint_t *temp = head;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}
