#include "lists.h"

/**
 *get_nodeint_at_index - function
 *@head: pointer point to head
 *@index: nth node
 *Return: nth node
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; head && i <= index; i++)
	{
		if (i == index)
			return (head);
		head = head->next;
	}
	return (NULL);
}
