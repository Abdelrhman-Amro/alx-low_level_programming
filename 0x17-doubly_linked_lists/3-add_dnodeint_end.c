#include "lists.h"

/**
 * add_dnodeint_end - add node at the end of the dlist
 * @head: head of the dlist
 * @n: value of the element
 * Return: address of the new element, or NULL if it failed
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *node;
	dlistint_t *last;

	last = *head;
	node = malloc(sizeof(dlistint_t));
	if (!node)
		return (NULL);
	node->n = n;
	while (last && last->next)
		last = last->next;
	node->prev = last;
	node->next = NULL;
	if (!last)
		*head = node;
	else
		last->next = node;
	return (node);
}
