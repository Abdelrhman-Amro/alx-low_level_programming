#include "lists.h"

/**
 *pop_listint - function
 *@head: pointer to pointer
 *Return: head node's data
*/

int pop_listint(listint_t **head)
{
	if (!*head)
		return (0);

	int n = (*head)->n;
	listint_t *tmp = *head;

	*head = (*head)->next;
	free(tmp);
	return (n);
}
