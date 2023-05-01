
#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list,
 * and returns the head node's data (n).
 * @head: pointer to a pointer to the head node of the list
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

    /* Store the head node in a temporary variable */
    temp = *head;

    /* Get the data (n) of the head node */
    n = temp->n;

    /* Update the head pointer to point to the next node */
    *head = (*head)->next;

    /* Free the memory allocated for the old head node */
    free(temp);

    /* Return the data (n) of the old head node */
    return (n);
}

