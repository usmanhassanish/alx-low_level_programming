#include <stdio.h>
#include "lists.h"
/**
 * print_listint - print the elements of a list
 * @h: list argument
 * Return: return number of nodes in the list
 */
size_t print_listint(const listint_t *h)
{
	size_t counter;

	counter = 0;

	while (h != NULL)
	{
		printf("%u\n", h->n);
		h = h->next;
		counter++;
	}
	return (counter);
}
