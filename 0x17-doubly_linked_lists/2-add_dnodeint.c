#include "lists.h"

/**
 * add_dnodeint - add node at the start of the dlist
 * @head: head of the dlist
 * @n: value of the new node
 * Return: address of the new element or NULL if failed
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *h = *head;
	dlistint_t *node = malloc(sizeof(dlistint_t));

	if (!node)
		return (NULL);
	node->n = n;
	node->next = h;
	node->prev = NULL;
	if (h != NULL)
		h->prev = node;
	*head = node;
	return (node);
}
