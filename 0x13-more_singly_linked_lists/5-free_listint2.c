#include "lists.h"

/**
 *free_listint2 - function
 *@head: pointer to pointer
*/

void free_listint2(listint_t **head)
{
	listint_t *tmp;

	while (*head)
	{
		tmp = *head;
		*head = (*head)->next;
		free(tmp);
	}
}
