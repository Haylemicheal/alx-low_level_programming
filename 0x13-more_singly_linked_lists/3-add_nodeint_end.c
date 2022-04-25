#include "lists.h"
#include "create_node.c"

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
