#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include "str_len.c"
/**
 * add_node - Add a node at the front
 * @head: head node
 * @str: string param
 * Return: new node
 */
list_t *add_node(list_t **head, const char *str)
{
	int len = str_len(str);
	list_t *new_node;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	else
	{
		new_node->str = strdup(str);
		new_node->len = len;
		new_node->next = *head;
		*head = new_node;
	}
	return (*head);
}
