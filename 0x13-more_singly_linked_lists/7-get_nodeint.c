#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list,
 * and returns the head node’s data (n).
 * @head: pointer to the head of the list
 *
 * Return: the data stored in the head node, or 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
    int data;
    listint_t *temp;

    /* Check if the list is empty */
    if (*head == NULL) {
        return 0;
    }

    /* Store the head node in a temporary variable */
    temp = *head;

    /* Set the head of the list to the next node */
    *head = (*head)->next;

    /* Retrieve the data stored in the original head node */
    data = temp->n;

    /* Free the memory allocated for the original head node */
    free(temp);

    /* Return the data stored in the original head node */
    return data;
}

