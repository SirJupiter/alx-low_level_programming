#include "hash_tables.h"

/**
 * hash_table_print - function prints a hash table
 * @ht: pointer to the hash table to be printed
*/
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int iterator;
	hash_node_t *current;

	if (ht == NULL)
		return;

	printf("{");

	for (iterator = 0; iterator < ht->size; iterator++)
	{
		current = ht->array[iterator];
		if (current != NULL)
		{
			printf("'%s': '%s'", current->key, current->value);
			break;
		}
	}

	for (iterator += 1; iterator < ht->size; iterator++)
	{
		current = ht->array[iterator];
		if (current != NULL)
		{
			while (current != NULL)
			{
				printf(", '%s': '%s'", current->key, current->value);
				current = current->next;
			}
		}
	}
	printf("}\n");
}
