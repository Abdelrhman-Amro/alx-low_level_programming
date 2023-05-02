#include "lists.h"

/**
 *add_nodeint_end - function
 *@head: pointer to pointer
 *@n: value
 *Return: the address of the new element
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t New = malloc(sizeof(listint_t));
	listint_t *tmp = *head;

	if (!New)
		return (0);
	New->n = n;
	New->next = 0;
	if (!*head)
	{
		*head = New;
		return (New);
	}
	while (tmp->next)
		tmp = tmp->next;
	tmp->next = New;
	return (New);
}
