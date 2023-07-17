#include "lists.h"
/**
 * add_node - new node at the beginning
 * @head: head
 * @str: string
 * Return: the address of the new element or null
*/

list_t *add_node(list_t **head, const char *str)
{
	list_t *new = malloc(sizeof(list_t));
	unsigned int i = 0;

	new->str = str;
	new->next = NULL;
	while (*str != '\0')
	{
		i++;
		str++;
	}
	new->len = i;
	*head = new;

	return (new);
}
