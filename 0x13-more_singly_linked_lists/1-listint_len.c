#include <stdio.h>
#include "lists.h"
/**
 * listint_len - print the elements of a list
 * @h: list argument
 * Return: return number of nodes in the list
 */
size_t listint_len(const listint_t *h)
{
	size_t counter;

	counter = 0;

	while (h != NULL)
	{
		h = h->next;
		counter++;
	}
	return (counter);
}
