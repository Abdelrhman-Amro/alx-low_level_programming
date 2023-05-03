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
	unsigned int i = 0;
	listint_t *Node = *head, *New = malloc(sizeof(listint_t));

	if (!head || !New)
		return (NULL);
	if (!Node)
	{
		New->n = n;
		New->next = *head;
		*head = New;
		return (New);
	}
	while (i < (idx - 1) && Node)
	{
		Node = Node->next;
		i++;
	}
	if (idx - 1 > i)
	{
		free(New);
		return (NULL);
	}
	New->n = n;
	New->next = Node->next;
	Node->next = New;
	return (New);
}
