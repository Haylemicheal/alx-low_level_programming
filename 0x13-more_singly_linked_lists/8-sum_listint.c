#include "lists.h"
#include <stdlib.h>

/**
 * sum_listint - Adds all the elements
 * @head: head node
 * Return: 0 or sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	
	if (head == NULL)
		return (0);
	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
