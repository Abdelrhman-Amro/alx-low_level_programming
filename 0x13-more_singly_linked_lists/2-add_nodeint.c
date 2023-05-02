#include "lists.h"

/**
 *add_nodeint - function
 *@head: head pointer to pointer
 *@n: value
 *Return: the address of the new element
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *New = malloc(sizeof(listint_t));

	if (!New)
		return (0);

	New->n = n;
	New->next = *head;
	*head = New;
	return (&New);
}
