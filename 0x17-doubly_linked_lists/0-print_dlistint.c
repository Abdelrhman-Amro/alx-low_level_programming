#include "lists.h"

/**
 * print_dlistint - print doubly linked list
 * @h: head of the dlist
 * Return: number of nodes
*/
size_t print_dlistint(const dlistint_t *h)
{
	size_t cnt = 0;

	while (h)
	{
		cnt++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (cnt);
}
