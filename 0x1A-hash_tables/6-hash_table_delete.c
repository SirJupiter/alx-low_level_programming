#include "hash_tables.h"

/**
 * hash_table_delete - function that deletes a hash table
 * @ht: pointer to the hash table to be deleted
*/
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int iterator;
	hash_node_t *current, *temp;

	if (ht == NULL)
		return;

	for (iterator = 0; iterator < ht->size; iterator++)
	{
		if  (ht->array[iterator] != NULL)
		{
			current = ht->array[iterator];

			while (current != NULL)
			{
				temp = current;
				current = current->next;
				free(temp->key);
				free(temp->value);
				free(temp);
			}
		}
	}
	free(ht->array);

	free(ht);
}
