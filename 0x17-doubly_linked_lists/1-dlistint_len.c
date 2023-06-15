#include <stddef.h>
#include "lists.h"
#include <stdio.h>
size_t dlistint_len(const dlistint_t *h)
{
        const dlistint_t *current = h;
        size_t count = 0;

        while (current != NULL)
        {
                current = current->next;
                count++;
        }
        return (count);
}
