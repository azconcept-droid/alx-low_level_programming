#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table.
 *
 * @ht: hash table to add or update the key/value to
 * @key: is the key
 * @value: is the value associated with the key.
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *hash_node;
	unsigned long int index, i;
	char *value_dup;

	if (*key == '\0' || key == NULL || value == NULL || ht == NULL)
		return (0);

	index = key_index((unsigned char *)key, ht->size);
	value_dup = strdup(value);
	if (value_dup == NULL)
		return (0);

	for (i = index; ht->array[i]; i++)
	{
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			free(ht->array[i]->value);
			ht->array[i]->value = value_dup;
			return (1);
		}
	}

	hash_node = malloc(sizeof(hash_node_t));
	if (hash_node == NULL)
	{
		free(value_dup);
		return (0);
	}

	hash_node->key = strdup(key);
	if (hash_node->key == NULL)
	{
		free(hash_node);
		return (0);
	}
	hash_node->value = value_dup;
	hash_node->next = ht->array[index];
	ht->array[index] = hash_node;

	return (1);
}
