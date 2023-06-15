#include <stddef.h>
#include "lists.h"
#include <stdio.h>
/**
 * dlistint_len - length of elements in a list
 * @h: argument 1
 * Return: returns number of elements in list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;
	const dlistint_t *current = h;

	while (current != NULL)
	{
		count++;
		current = current->next;
	}

	return (count);
}
