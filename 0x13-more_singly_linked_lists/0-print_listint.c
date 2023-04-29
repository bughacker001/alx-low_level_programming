#include "lists.h"

/**
 * print_listint - printing all the elements of a listint_t 
 * @h: pointer to the head of the list
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
    size_t count = 0;

/* introducing while loop */

    while (h != NULL)
    {
        printf("%dn", h->n);
        count++;
        h = h->next;
    }
/* returning output count */
    return (count);
}

