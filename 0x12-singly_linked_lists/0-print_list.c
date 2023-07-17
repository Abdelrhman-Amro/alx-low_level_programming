#include "lists.h"
/**
 * print_list - print all the elements in the list
 * h: head of the list
 * Return:The number of nodes
*/

size_t print_list(const list_t *h)
{
	size_t N = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		printf("[%lu] %s\n", h->len, h->str);
		h = h->next;
		N++;
	}
	return (N);
}
