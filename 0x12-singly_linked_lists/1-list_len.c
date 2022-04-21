#include "lists.h"

/**
 * list_len - Returns size of list
 * @h: Node param
 * Return: length
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}
