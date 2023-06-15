#include <stddef.h>
#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * add_dnodeint - add new node to the beginning of list
 * @head: argument 1
 * @n: argument 2
 * Return: returns the address os new node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newNode = malloc(sizeof(dlistint_t));

	if (newNode == NULL)
		return (NULL);

	newNode->n = n;

	newNode->next = (*head);

	newNode->prev = NULL;

	if ((*head) != NULL)
		(*head)->prev = newNode;
	(*head) = newNode;
	return (newNode);
}
