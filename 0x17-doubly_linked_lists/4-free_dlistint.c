#include "lists.h"

/**
 * free_dlistint - free a linked list
 * @head: Head of the list
 * Return: none
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current = head, *temp;

	if (!head)
		return;
	while (current->next)
	{
		temp = current;
		current = current->next;
		free(temp);
	}
	free(current);
}
