#include "lists.h"

/**
 * get_nodeint_at_index - The nth node of a listint_t linked lists.
 * @head: The pointer of the first node in the linked list.
 * @index: The index of the node.
 *
 * Return: Pointer of the index of the node, or NULL.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	
	if (head == NULL)
		return (NULL);
	for (i = 0; i < index; i++)
	{
		head = head->next;
		if (head == NULL)
			return (NULL);
	}
	return (head); 
}
