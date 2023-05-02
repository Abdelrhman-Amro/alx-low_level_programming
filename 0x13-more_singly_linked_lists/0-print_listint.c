#include "lists.h"

/**
 * print_listint - function
 * @h: head
 * Return: Number of nodes
*/

size_t print_listint(const listint_t *h)
{
	size_t ln = 0;

	while (h)
	{
		printf("%d\n", h->n);
		ln++;
		h = h->next;
	}
	return (ln);
}
