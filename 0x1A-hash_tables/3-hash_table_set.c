#include "hash_tables.h"

/**
 * hash_table_set -  adds an element to the hash table.
 * @ht: hash table you want to add or update the key/value to.
 * @key: the key and cannot be an empty string.
 * @value: the value associated with the key.
 * Return: 1 if it succeeded, 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *item_ptr;

	if (!key || strcmp(key, "") == 0)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	item_ptr = create_item(key, value);

	if (!item_ptr)
		return (0);

	ht->array[index] = item_ptr;
	return (1);
}

/**
 * create_item - creates a hash_node_t item.
 * @key: the key.
 * @value: the value associated with the key.
 * Return: the pointer to the item.
 */

hash_node_t *create_item(const char *key, const char *value)
{
	hash_node_t *item = malloc(sizeof(hash_node_t));

	if (!item)
		return (NULL);

	item->key = NULL;
	item->value = NULL;
	strcpy(item->key, key);
	strcpy(item->value, value);
	item->next = NULL;

	return (item);
}
