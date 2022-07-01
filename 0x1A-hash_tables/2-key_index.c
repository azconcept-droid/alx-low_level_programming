#include "hash_tables.h"

/**
 * key_index - function that gives you the index of a key.
 *
 * @key: the key passed in
 * @size: size of hash table
 * Return: index of a key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_value;
	unsigned long int index;

	hash_value = hash_djb2((unsigned char *)key);
	index = hash_value % size;

	return (index);
}
