#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * add_nodeint - add a node at the beginning
 * @head: first argument
 * @n: second argument
 * Return: returns the address of the first node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
    /* 1. allocate node */
    listint_t* new_node = (listint_t*) malloc(sizeof(listint_t));
   
    /* 2. put in the data  */
    new_node->n  = n;
   
    /* 3. Make next of new node as head */
    new_node->next = (*head);
   
    /* 4. move the head to point to the new node */
    (*head) = new_node;
    return (*head);
}
