#include "lists.h"
/**
 * print_list - print elemnt of lsist
 * @h: list
 * Return: returns number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t numNodes = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		numNodes++;
		h = h->next;
	}
	return (numNodes);
}
