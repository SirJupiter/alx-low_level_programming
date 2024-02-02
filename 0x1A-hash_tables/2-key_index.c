#include "hash_tables.h"

/**
 * key_index - function that gives you the index of a key
 * @key: the key string of each item
 * @size: size of the array of the hash table
 *
 * Return: index at which key/value pair should be store
*/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash, key_index;

	if (key == NULL)
		return ((unsigned long int)NULL);

	hash = hash_djb2(key);
	key_index = hash % size;

	return (key_index);
}
