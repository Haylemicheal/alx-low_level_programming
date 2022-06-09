#include "lists.h"
#include <stdio.h>

/**
 * add_dnodeint - Adds a node at the begining
 * @head: Head of the list
 * @n: value
 * Return: A new list with the added node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *node;

	node = malloc(sizeof(dlistint_t));

	if (node == NULL)
	{
		free(node);
		return (NULL);
	}
	node->n = n;
	node->next = (*head);
	node->prev = NULL;
	if (*head)
		(*head)->prev = node;

	*head = node;


	return (*head);
}
