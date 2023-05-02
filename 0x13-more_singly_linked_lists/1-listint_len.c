#include "lists.h"

/**
 *listint_len - function
 *@h: pointer
 *Return: ln
*/

size_t listint_len(const listint_t *h)
{
	size_t ln = 0;

	while (h)
	{
		h = h->next;
		ln++;
	}
	return (ln);
}
