#include "lists.h"
/**
 * print_list - print all the elements in the list
 * h: head of the list
 * Return:The number of nodes
*/

size_t print_list(const list_t *h)
{
	size_t N = 0;
	if (h == NULL)
		printf("[0] (nil)");
	while (h)
	{
		printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		N++;
	}
	return (N);
}
