#include "lists.h"

/**
 *pop_listint - function
 *@head: pointer to pointer
 *Return: head node's data
*/

int pop_listint(listint_t **head)
{
	listint_t *tmp = *head;
	int n;

	if (!*head)
		return (0);

	n = (*head)->n;
	*head = (*head)->next;
	free(tmp);
	return (n);
}
