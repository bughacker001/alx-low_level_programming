#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * and returns the head node's data (n)
 * @head: pointer to the head node of the list
 *
 * Return: the head node's data (n), or 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
    int n;
    listint_t *temp;

    /* Check if the list is empty */
    if (*head == NULL)
        return (0);

    /* Create a temporary pointer to the head node */
    temp = *head;

    /* Get the value of the head node's data */
    n = temp->n;

    /* Update the head pointer to point to the next node */
    *head = temp->next;

    /* Free the memory allocated for the original head node */
    free(temp);

    /* Return the value of the head node's data */
    return (n);
}

