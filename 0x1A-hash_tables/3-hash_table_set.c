#include "hash_tables.h"

/**
 * hash_table_set - function that adds an element to the hash table
 * @ht: pointer to the hashtable
 * @key: key of the key/value pair
 * @value: value of the key/value pair
 *
 * Return: 1 on success, 0 otherwise
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *node_item;
	unsigned long int index;
	char *item_value;

	if (ht == NULL || key == NULL || strlen(key) == 0)
		return (0);

	node_item = malloc(sizeof(hash_node_t));
	if (node_item == NULL)
		return (0);

	item_value = strdup(value);
	node_item->value = item_value;
	node_item->key = strdup(key);
	node_item->next = NULL;

	index = hash_djb2((unsigned char *)key) % ht->size;

	if (ht->array[index] == NULL)
		ht->array[index] = node_item;
	else
	{
		if (strcmp(ht->array[index]->key, key) == 0)
			ht->array[index]->value = item_value;
		else
		{
			node_item->next = ht->array[index];
			ht->array[index] = node_item;
		}
	}

	return (1);
}
