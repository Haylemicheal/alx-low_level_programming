#include <stdio.h>
#include <stdlib.h>

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
