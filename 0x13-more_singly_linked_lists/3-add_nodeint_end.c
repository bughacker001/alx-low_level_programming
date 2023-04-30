#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list
 * @head: pointer to pointer to head of list
 * @n: integer to be added to new node
 *
 * Return: address of new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
    listint_t *new_node, *temp;

    /* Check if head is NULL */
    if (head == NULL)
        return (NULL);

    /* Allocate memory for new node */
    new_node = malloc(sizeof(listint_t));
    if (new_node == NULL)
        return (NULL);

    /* Initialize new node */
    new_node->n = n;
    new_node->next = NULL;

    /* If list is empty, make new node the head */
    if (*head == NULL)
    {
        *head = new_node;
        return (new_node);
    }

    /* Traverse the list to find the last node */
    temp = *head;
    while (temp->next != NULL)
        temp = temp->next;

    /* Add new node to the end of the list */
    temp->next = new_node;

    return (new_node);
}

