#include "hash_tables.h"

/**
 * key_index - gives you the index of a key.
 * @key: key of item
 * @size: size of the array of the hash table
 * Return:	index at which the key/value pair should be stored
 *			in the array of the hash table
*/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int key_value = hash_djb2(key);

	return (key_value % size);
}
