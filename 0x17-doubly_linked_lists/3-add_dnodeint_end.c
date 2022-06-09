#include "lists.h"

dlistint_t *add_dnodeint_(dlistint_t **head, const int n);
/**
 * add_dnodeint_end - Add node at the end
 * @head: head of the list
 * @n: value
 * Return: newlist
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *node, *current;

	if (!(*head))
		return (add_dnodeint_(head, n));

	node = malloc(sizeof(dlistint_t));
	current = malloc(sizeof(dlistint_t));
	if (!node)
		return (NULL);
	node->n = n;
	node->next = NULL;
	current = *head;

	while (current->next)
	{
		current = current->next;
	}
	current->next = node;
	node->prev = current;
	return (node);
}

/**
 * add_dnodeint_ - Adds a node at the begining
 * @head: Head of the list
 * @n: value
 * Return: A new list with the added node
 */
dlistint_t *add_dnodeint_(dlistint_t **head, const int n)
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

