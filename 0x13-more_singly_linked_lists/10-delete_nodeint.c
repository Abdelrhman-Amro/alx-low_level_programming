#include "lists.h"

/**
 *delete_nodeint_at_index - function
 *@head: pointer to pointer
 *@index: location
 *Return: 1 or -1
*/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *cur, *prv;

	if (!head || !*head)
		return (-1);
	if (!index)
	{
		cur = *head;
		*head = cur->next;
		free(cur);
		return (1);
	}
	cur = *head, prv;
	while (cur && i < index)
	{
		prv = cur;
		cur = cur->next;
		i++;
	}
	if (index > i)
		return (-1);
	prv->next = cur->next;
	free(cur);
	return (1);
}
