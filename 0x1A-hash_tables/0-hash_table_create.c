#include "hash_tables.h"

/**
 * hash_table_create - function creates a hash table
 * @size: size of the hash table
 *
 * Return: pointer to struct hash_table_s or NULL on error
*/
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int iterator;
	hash_table_t *ht = malloc(sizeof(hash_table_t));

	if (ht == NULL || size <= 0)
		return (NULL);

	ht->size = size;

	ht->array = malloc(sizeof(hash_node_t *) * size);
	if (ht->array == NULL)
		return (NULL);

	for  (iterator = 0; iterator < size; iterator++)
		ht->array[iterator] = NULL;

	return (ht);
}
