#include "hash_tables.h"

/**
 * creat_item - creat new item
 * @key: key
 * @value: value
 * Return: pointer to new item
*/
hash_node_t *creat_item(const char *key, const char *value)
{
	hash_node_t *item;

	item = malloc(sizeof(hash_node_t));
	if (item == NULL)
		return (0);
	item->key = strdup(key);
	item->value = strdup(value);
	return (item);
}

/**
 * hash_table_set - add an element to the hash table.
 * @ht: the hash table you want to add or update the key/value to
 * @key: key, can not be an empty string
 * @value: value associated with the key
 * Return: 1 if it succeeded, 0 otherwise
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int idx, update = 0;
	hash_node_t *item, *node;

	if (ht == NULL)
		return (0);
	idx = key_index((const unsigned char *)key, ht->size);
	if (ht->array[idx])
	{
		node = ht->array[idx];
		while (node)
		{
			if (strcmp(node->key, key) == 0)
			{
				update = 1;
				break;
			}
			node = node->next;
		}
		if (update)
			ht->array[idx]->value = strdup(value);
		else
		{
			item = creat_item(key, value);
			item->next = ht->array[idx];
			ht->array[idx] = item;
		}
	}
	else
	{
		item = creat_item(key, value);
		ht->array[idx] = item;
	}
	return (1);
}
