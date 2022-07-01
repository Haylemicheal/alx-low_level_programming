#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>

/**
 * hash_table_get - Retrives the value associated with a key
 * @key: Key
 * @ht: Hashtable
 * Return: Value or NULL
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *node;
	char *value;

	if (ht == NULL || *key == '\0' || *key == '\n')
		return (NULL);
	index = key_index((const unsigned char *)key, ht->size);
	if (ht->array[index] == NULL)
		return (NULL);
	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
		return (NULL);
	node = ht->array[index];
	while (node != NULL)
	{
		if (strcmp(key, node->key) == 0)
		{
			value = node->value;
			free(node);
			return (value);
		}
		node = node->next;
	}
	free(node);
	return (NULL);
}
