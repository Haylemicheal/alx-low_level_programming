#include "hash_tables.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * hash_table_print - Prints a hash table
 * @ht: Hashtable
 */
void hash_table_print(const hash_table_t *ht)
{
	const hash_node_t *node;
	int flag;
	unsigned long int i;

	if (ht != NULL)
	{
		node = malloc(sizeof(hash_node_t));
		if (!node)
			return;
		printf("{");
		for (i = 0; i < ht->size; i++)
		{
			if (ht->array[i] != NULL)
			{
				if (flag == 1)
				{
					printf(", ");
				}
				node = ht->array[i];
				while (node != NULL)
				{
					printf("'%s': '%s'", node->key, node->value);
					node = node->next;
					if (node != NULL)
						printf(", ");
				}
				flag = 1;
			}
		}
		printf("}\n");
	}
}
