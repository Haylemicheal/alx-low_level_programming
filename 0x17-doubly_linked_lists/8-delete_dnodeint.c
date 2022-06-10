#include "lists.h"
#include <stdio.h>

/**
 * delete_dnodeint_at_index - Delete a node at specific index
 * @head: Head node
 * @index: Index to be deleted
 * Return: -1 or 1
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *node = *head;
	unsigned int c = 0;

	if (!(head))
		return (-1);

	while (node)
	{
		if (c == index)
			break;
		c++;
		node = node->next;
	}

	if (!node)
		return (-1);

	if (node->prev != NULL)
		node->prev->next = node->next;
	else
	{
		*head = node->next;
		if (node->next != NULL)
			node->next->prev = NULL;
		free(node);
	}

	return (1);
}


