#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - frees a list
 * @head: head node
 */
void free_listint(listint_t *head)
{
	listint_t *place_holder;

	while (head)
	{
		place_holder = head;
		head = head->next;

		free(place_holder);
	}
}
