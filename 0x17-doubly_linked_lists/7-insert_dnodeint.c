#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * create_dnode - create node
 * @n: argument 1
 * Return: returns new_node
 */
dlistint_t *create_dnode(int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = NULL;
	return (new_node);
}
/**
 * insert_dnodeint_at_index - insert at index
 * @h: arg 1
 * @idx: arg 2
 * @n: arg 3
 * Return: new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *current = *h;
	dlistint_t *new_node;
	unsigned int i;

	if (h == NULL)
	{
		return (NULL);
	}

	if (idx == 0)
	{
		dlistint_t *new_node = create_dnode(n);
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->next = *h;
	if (*h != NULL)
	{
		(*h)->prev = new_node;
	}
		*h = new_node;
	return (new_node);
	}

	for (i = 0; i < idx - 1; i++)
	{
		if (current == NULL)
		{
			return (NULL);
		}
		current = current->next;
	}
	if (current == NULL)
	{
		return (NULL);
	}
	new_node = create_dnode(n);
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->next = current->next;
	new_node->prev = current;
	if (current->next != NULL)
	{
		current->next->prev = new_node;
	}
	current->next = new_node;
	return (new_node);
}
