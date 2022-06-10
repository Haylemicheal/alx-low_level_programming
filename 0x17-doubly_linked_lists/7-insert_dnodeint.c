#include "lists.h"

/**
 * insert_dnodeint_at_index - insert node at index
 * @h: Head node
 * @idx: index for the new node
 * @n: value
 * Return: Adress of the new node or NULL
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp = *h, *node;
	unsigned int count = 0, i = 0;

	if (!(*h))
		return (NULL);

	while (temp)
	{
		temp = temp->next;
		count++;
	}
	if (idx > count)
		return (NULL);
	else if (idx == count)
		return (add_dnodeint_end(h, n));
	else if (idx == 0)
		return (add_dnodeint(h, n));

	node = malloc(sizeof(dlistint_t));
	if (!node)
		return (NULL);
	node->n = n;
	temp = *h;
	for (i = 0; i < idx - 1; i++)
	{
		temp = temp->next;
	}
	node->next = temp->next;
	temp->next->prev = node;
	temp->next = node;
	node->prev = temp;

	return (node);
}
