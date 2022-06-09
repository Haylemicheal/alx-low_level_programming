#include "lists.h"
#include <stdio.h>

/**
 * print_dlistint - prints all the elements of a dlist
 * @h: Head for double linked list
 * Return: Number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;

	if (h == NULL)
		return (0);
	while (h)
	{
		count++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (count);
}
