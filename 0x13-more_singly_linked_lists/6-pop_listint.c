#include "lists.h"

/**
 * pop_listint - Deletes the head node of a linked list.
 * @head: A double pointer.
 *
 * Return: The data inside the elements that was deleted,
 * or 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *start;
	int n;

	if (head == NULL || *head == NULL)
		return (0);
	start = *head;
	*head = start->next;
	n = start->n;
	free(start);
	return (n);
}
