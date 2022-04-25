#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - frees a list
 * @head: head node
 */
void free_listint2(listint_t **head)
{
	listint_t *place_holder;

	if (head)
	{
		while (*head)
		{
			place_holder = *head;
			*head = place_holder->next;
			free(place_holder);
		}
	}
}
