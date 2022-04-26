#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - delete element at index
 * @head: head node
 * @index: index to delete
 * Return: 1 or -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *node;
	listint_t *current = *head;
	unsigned int i = 0;

	if (!current)
		return (-1);
	if (index == 0)
	{
		*head = current->next;
		free(current);
		return (1);
	}
	while (current && (i < index - 1))
	{
		current = current->next;
		i++;
	}
	if (current->next && i == index - 1)
	{
		node = current->next;
		current->next = current->next->next;
		free(node);
		return (1);
	}
	return (-1);
}
