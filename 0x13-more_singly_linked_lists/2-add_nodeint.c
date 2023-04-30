#include <stdlib.h>
#include "lists.h"
/**
 * add_nodeint - adds a new node at the beginning of a listint_t list
 * @head: pointer to pointer to head of list
 * @n: integer to be added to new node
 *
 * Return: address of new element, or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
    listint_t *new_element;

    if (head == NULL)
        return (NULL);

    new_element = malloc(sizeof(listint_t));
    if (new_element == NULL)
        return (NULL);

    new_element->n = n;
    new_element->next = *head;
    *head = new_element;

    return (new_element);
}
