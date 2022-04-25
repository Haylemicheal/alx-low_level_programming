#include "lists.h"

/**
 * insert_nodeint_at_index - Insert node at index idx
 * @head: head node
 * @idx: index of the new node
 * @n: int value of the new node
 * Return: NULL or address of the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *node = create_node(n);
	listint_t *current_node = *head;
	unsigned int i = 0;

	while (current_node && (i < idx - 1))
	{
		current_node = (current_node)->next;
		i++;
	}

	if (i < idx - 1)
		return (NULL);
	node->next = (current_node)->next;
	(current_node)->next = node;

	return (*head);
}

