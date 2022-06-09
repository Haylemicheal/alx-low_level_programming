#include "lists.h"

/**
 * dlistint_len - Returns number of elements
 * @h: Head for double linked list
 * Return: Size of the list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	if (h == NULL)
		return (0);
	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}
