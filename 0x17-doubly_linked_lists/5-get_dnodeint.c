#include "lists.h"

/**
 * get_dnodeint_at_index - Get the node at any index
 * @head: Head of the linked list
 * @index: index
 * Return: The founded node or NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *node = head;
	unsigned int count = 0;

	if (!head)
		return (NULL);
	while (node)
	{
		if (index == count)
			return (node);
		count++;
		node = node->next;
	}
	return (NULL);
}
