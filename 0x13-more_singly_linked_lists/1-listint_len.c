#include "lists.h"

/**
 * listint_len - Returns the size of the nodes
 * @h: Node params
 * Return: The size of the list
 */
size_t listint_len(const listint_t *h)
{
	size_t c = 0;

	while (h)
	{
		h = h->next;
		c++;
	}
	return (c);
}
