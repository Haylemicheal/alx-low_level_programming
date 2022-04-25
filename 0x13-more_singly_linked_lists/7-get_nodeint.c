#include "lists.h"

/**
 * get_nodeint_at_index - Get the node at specified index
 * @head: head node
 * @index: index of list
 * Return: node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (head && (i < index))
	{
		head = head->next;
		i++;
	}
	if (i < index)
		return (NULL);
	return (head);
}
