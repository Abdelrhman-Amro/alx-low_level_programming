#include "hash_tables.h"

/**
 * hash_table_set - add an element to the hash table.
 * @ht: the hash table you want to add or update the key/value to
 * @key: key, can not be an empty string
 * @value: value associated with the key
 * Return: 1 if it succeeded, 0 otherwise
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int i;
	hash_node_t *item;

	/*Creat Item*/
	item = malloc(sizeof(hash_node_t));
	if (item == NULL)
		return (0);
	item->key = strdup(key);
	item->value = strdup(value);
	if (!item->key || !item->value)
		return (0);

	/*Find index*/
	i = key_index((const unsigned char *)key, ht->size);

	/*Check index*/
	if (ht->array[i] == NULL)
		ht->array[i] = item;
	else
	{
		item->next = ht->array[i];
		ht->array[i] = item;
	}

	return (1);
}
