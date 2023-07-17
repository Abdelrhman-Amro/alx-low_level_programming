#include "lists.h"

/**
 * add_node - new node at the beginning
 * @head: head
 * @str: string
 * Return: the address of the new element or null
*/

list_t *add_node(list_t **head, const char *str)
{
	unsigned int L = 0;
	list_t *New = malloc(sizeof(list_t));

	if (New == NULL)
		return (NULL);

	while (str[L] != '\0')
		L++;

	New->len = L;
	New->str = strdup(str);
	New->next = *head;
	*head = New;

	return (New);
}
