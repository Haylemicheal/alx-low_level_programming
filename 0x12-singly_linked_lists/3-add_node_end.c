#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include "str_len.c"
/**
 * add_node_end - Add a node at the front
 * @head: head node
 * @str: string param
 * Return: new node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *node = *head;

	if (node)
	{
		while (node)
		{
			if (node->next)
			{
				node = node->next;
			}
			else
			{
				node->next = create_node(str);
				return (node->next);
			}
		}
	}
	else
	{
		*head = create_node(str);
	}
	return (*head);
}

/**
 * create_node - create new node
 * @str: string input
 * Return: The created node
 */
list_t *create_node(const char *str)
{
	list_t *new_node;
	int len = str_len(str);

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	else
	{
		new_node->str = strdup(str);
		new_node->len = len;
		new_node->next = NULL;
	}
	return (new_node);
}
