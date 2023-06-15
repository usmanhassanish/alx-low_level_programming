#include <stddef.h>
#include <stdio.h>
#include "lists.h"
/**
 * sum_dlistint - Returns the sum of all the data
 * @head: Pointer to the head
 *
 * Return: The sum of all the data value
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *current = head;

	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}

	return (sum);
}
