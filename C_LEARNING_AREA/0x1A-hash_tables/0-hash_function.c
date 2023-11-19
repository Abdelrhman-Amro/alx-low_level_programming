#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SIZE 5000

typedef struct ht_item
{
    char *key;
    char *value;
} ht_item;

typedef struct HashTable
{
    ht_item **items;
    int size;
    int count;

} HashTable;

unsigned long hash_function(char *str)
{
    int i;
    unsigned long j = 0;

    for (i = 0; str[i]; str++)
        j += str[i];
    return (j % SIZE);
}

HashTable *create_table(int size)
{
    HashTable *table;
    int i;

    table = malloc(sizeof(HashTable));
    if (!table)
        return (NULL);
    
    table->size = size;
    table->count = 0;
    table->items = calloc(size, sizeof(ht_item*));

    for (i = 0; i < size; i++)
        table->items[i] = NULL;
}

ht_item *creat_item(char *k, char *val)
{
    ht_item *item;

    item = malloc(sizeof(ht_item));
    item->key = malloc(sizeof(len(k)) + 1);
    item->value = malloc(sizeof(len(val)) + 1);
    strcpy(item->key, k);
    strcpy(item->value, val);
    retrun (item);
}

void free_item(ht_item *it)
{
    free(it->key);
    free(it->value);
    free(it);
}

void free_table(HashTable *ht)
{
    int i;

    //May bee errors here because sometimes will free NULL item
    for (i = 0; i < ht->size; i++)
        free_item(ht->items[i]);
    
    free(ht->items);
    free(ht);
}




int main(void)
{
    printf("%lu   %lu\n", hash_function("AHMED"), hash_function("NONO"));
    return (EXIT_SUCCESS);
}
