#include "lists.h"

/**
 * insert_dnodeint_at_index - insert a new node at the given position
 * @h: head of the dlist
 * @idx: index in the dlist
 * @n: value of the new node
 * Return: address of the new node, or NULL if it failed
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *node;
	dlistint_t *node_idx;

	node = malloc(sizeof(dlistint_t));
	if (node ==  NULL)
		return (NULL);
	/***************check if add at the beginning********************/
	if (idx == 0)
		return (add_dnodeint(h, n));

	/****************find node idx*******************/
	node_idx = *h;
	while (node_idx->next && idx)
	{
		node_idx = node_idx->next;
		idx--;
	}
	if (idx > 1)
		return (NULL);

	/*********************check if add at the end***********************/
	if (node_idx->next == NULL && idx)
		return (add_dnodeint_end(h, n));

	/********************add node in the middle***********************/
	node->n = n;
	node->next = node_idx;
	node->prev = node_idx->prev;
	node_idx->prev->next = node;
	node_idx->prev = node;
	return (node);
}
