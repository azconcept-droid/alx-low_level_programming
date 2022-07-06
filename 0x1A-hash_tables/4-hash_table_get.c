#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key.
 * @ht: the hash table you want to look into
 * @key: the key you are looking fo
 *
 * Return: the value associated with the element 
 * or NULL if key couldn’t be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
    hash_node_t *hash_node;

	if (ht == NULL || *key == '\0' || key == NULL)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	if (index >= ht->size)
		return (NULL);

	hash_node = ht->array[index];
	while (hash_node && strcmp(hash_node->key, key) != 0)
		hash_node = hash_node->next;

	if (hash_node == NULL)
		return (NULL);
	return (hash_node->value);
}