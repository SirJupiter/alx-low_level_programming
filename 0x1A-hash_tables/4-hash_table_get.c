#include "hash_tables.h"

/**
 * hash_table_get - function retrieves a value associated with a key
 * @ht: pointer to the hashtable into which we need to look
 * @key: key for which we are looking
 *
 * Return: the corresponding value if found, NULL otherwise
*/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int iterator;
	hash_node_t *temp;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	iterator  = key_index((unsigned char *)key, ht->size);

	if (ht->array[iterator] != NULL)
	{
		temp = ht->array[iterator];
		while (temp != NULL)
		{
			if (strcmp(temp->key, key) == 0)
				return (temp->value);
			temp = temp->next;

		}
		return (NULL);
	}

	return (NULL);
}
