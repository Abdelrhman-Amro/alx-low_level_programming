#include "lists.h"

/**
 *sum_listint - function
 *@head: pointer point to head
 *Return: sum of all data
*/

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
