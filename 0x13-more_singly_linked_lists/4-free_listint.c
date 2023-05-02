#include "lists.h"

/**
 *free_listint - function
 *@head: pointer point to head
*/

void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}
