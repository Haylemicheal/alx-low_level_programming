#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - Add node at the end of the list
 * @head: head node
 * @n: Integer input
 * Return: Return the node address
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node = *head;

	if (node)
	{
		while (node)
		{
			if (node->next)
			{
				node = node->next;
			}
			else
			{
				node->next = create_node(n);
				return (node->next);
			}
		}
	}
	else
	{
		*head = create_node(n);
	}
	return (*head);
}

/**
 * create_node - create new node
 * @n: int input
 * Return: The created node
 */
listint_t *create_node(const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	else
	{
		new_node->n = n;
		new_node->next = NULL;
	}
	return (new_node);
}
