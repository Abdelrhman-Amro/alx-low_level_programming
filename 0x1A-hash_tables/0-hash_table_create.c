#include "hash_tables.h"

hash_table_t *hash_table_create(unsigned long int size)
{
    hash_table_t *ht;

    ht = malloc(sizeof(ht) * (2 + size));

    return (ht);
}
