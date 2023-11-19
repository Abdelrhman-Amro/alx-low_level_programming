#include "lists.h"

/**
 * delete_dnodeint_at_index - delete node at index
 * @head: head of the list
 * @index: index to search for
 * Return: 1 if it succeeded, -1 if it failed
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *node = *head;
	unsigned int select = 0;

	while (node && select < index)
	{
		node = node->next;
		select++;
	}
	if (node == NULL || select < index)
		return (-1);
	if (index != 0)
		node->prev->next = node->next;
	if (node->next != NULL)
		node->next->prev = node->prev;
	if (index == 0)
		*head = node->next;
	free(node);
	return (1);
}
