#include "lists.h"

/**
 * free_dlistint - free the dlist
 * @head: head of the dlist
*/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *to_free = head;

	while (head)
	{
		to_free = head;
		head = head->next;
		free(to_free);
	}
}
