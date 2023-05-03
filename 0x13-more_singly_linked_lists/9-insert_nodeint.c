#include "lists.h"

/**
 *insert_nodeint_at_index - function
 *@head: pointer to pointer
 *@idx: index
 *@n: data
 *Return: address of the new node
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	lists_t *cur, *prv, *New;

	i = 0;
	cur = *head, prv = *head;

	while (i < idx && cur->next)
	{
		prv = cur;
		cur = cur->next;
		i++;
	}
	if (i + 1 < idx)
		return (NULL);
	New = malloc(sizeof(lists.h));
	if (!New)
		return (NULL);
	New->n = n;
	New->next = prv->next;
	prv->next = New;
	return (New);
}