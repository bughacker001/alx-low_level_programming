#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - frees a listint_t list and sets the head to NULL
 * @head: pointer to pointer to head of list
 *
 * Return: void
 */
void free_listint2(listint_t **head)
{
    listint_t *temp;

    /* Traverse the list and free each node */
    while (*head != NULL)
    {
        temp = *head;
        *head = (*head)->next;
        free(temp);
    }

    /* Set head to NULL */
    *head = NULL;
}

