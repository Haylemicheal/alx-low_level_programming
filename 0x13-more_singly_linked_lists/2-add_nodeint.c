#include "lists.h"
#include "create_node.c"

/**
 * add_nodeint - Adds node in the front
 * @head: head node
 * @n: intger input
 * Return: Address of the new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node = create_node(n);

	node->next = *head;
	*head = node;
	return (node);
}
