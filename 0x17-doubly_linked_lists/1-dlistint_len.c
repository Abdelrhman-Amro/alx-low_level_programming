#include "lists.h"

/**
 * dlistint_len - Return number of nodes
 * @h: head of the dlist
 * Return: number of nodes
*/
size_t dlistint_len(const dlistint_t *h)
{
	size_t cnt = 0;

	while (h)
	{
		cnt++;
		h = h->next;
	}
	return (cnt);
}
