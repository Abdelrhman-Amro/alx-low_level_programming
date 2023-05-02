#include "lists.h"

/**
 *print_listint - function
 *@h: head
 *Return: Number of nodes
*/

size_t print_listint(const listint_t *h)
{
	listint_t *tmp = h;
	size_t ln = 0;

	while (tmp)
	{
		printf("%d\n", tmp->n);
		ln++;
		tmp = tmp->next;
	}
	return (ln);
}
