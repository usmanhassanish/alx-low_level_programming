#include "lists.h"
/**
 * list_len - returns length of list
 * @h: takes in the list
 * Return: returns length of list
 */
size_t list_len(const list_t *h)
{
	size_t numNodes = 0;

	while (h != NULL)
	{
		numNodes++;
		h = h->next;
	}
	return (numNodes);
}
