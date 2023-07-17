#include "lists.h"
/**
 * list_len - print all the elements in the list
 * @h: head of the list
 * Return:The number of nodes
*/

size_t list_len(const list_t *h)
{
	size_t N = 0;

	while (h)
	{
		h = h->next;
		N++;
	}
	return (N);
}
