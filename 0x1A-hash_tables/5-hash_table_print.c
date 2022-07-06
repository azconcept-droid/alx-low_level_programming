#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table.
 * @ht: the hash table
 *
 * Return: Nothing
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *hash_node;
	unsigned char put_coma = 0;

	if (ht == NULL)
		return;

	printf("{");
	i = 0;
	while (i < ht->size)
	{
		if (ht->array[i] != NULL)
		{
			if (put_coma == 1)
				printf(", ");

			hash_node = ht->array[i];
			while (hash_node != NULL)
			{
				printf("'%s': '%s'", hash_node->key, hash_node->value);
				hash_node = hash_node->next;
			}
			put_coma = 1;
		}
		i++;
	}
	printf("}\n");
}
