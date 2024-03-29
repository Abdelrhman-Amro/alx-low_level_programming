#include "lists.h"

/**
 * sum_dlistint - summation of data in dlist
 * @head: head of the dlist
 * Return: Summation of data or NULL if empty
*/
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
