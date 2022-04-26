#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - Delete the head node
 * @head: head node
 * Return: 0 or head's data
 */
int pop_listint(listint_t **head)
{
	listint_t *node = *head;
	int n;

	if (*head == NULL)
		return (0);
	n = node->n;
	*head = node->next;
	free(node);
	return (n);
}
