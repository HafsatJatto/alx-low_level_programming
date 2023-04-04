#include "lists.h"

/**
 * insert_nodeint_at_index - Inserting a new node at a given position.
 * @head:A double pointer.
 * @index: Index of the node.
 * @n: New node value
 *
 * Return: The address of new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int index, int n)
{
	unsigned int i;
	listint_t *temp, *new;

	if (head == NULL)
		return (NULL);
	if (index != 0)
	{
		temp = *head;
		for (i = 0; i < index - 1 && temp != NULL; i++)
		{
			temp = temp->next;
		}
		if (temp == NULL)
			return (NULL);
	}
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (index == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	new->next = temp->next;
	temp->next = new;
	return (new);
}
