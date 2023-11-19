#include "lists.h"

/**
 * insert_dnodeint_at_index - insert a new node at the given position
 * @h: head of the dlist
 * @idx: index in the dlist
 * @n: value of the new node
 * Return: address of the new node, or NULL if it failed
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n);
