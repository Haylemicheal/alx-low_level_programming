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
	dlistint_t *node = *head, *temp;
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

	temp = malloc(sizeof(dlistint_t));
	temp = node;
	if (index == 0 && node->next != NULL)
	{
		node = node->next;
		node->prev = NULL;
		if (c == 0)
			*head = node;
		free(temp);
		return (1);
	}
	else if (node->next == NULL)
	{
		node = node->next;
		*head = node;
		free(temp);
		return (1);
	}

	node->prev->next = temp->next;
	temp->next->prev = node->prev;
	free(temp);
	return (1);
}


