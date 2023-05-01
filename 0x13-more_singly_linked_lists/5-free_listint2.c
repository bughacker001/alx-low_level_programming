#include <stdlib.h>
#include "lists.h"
/**
 * free_listint2 - is use to free a listint_t list not forgetting to set the head to NULL
 * @head: a pointer to pointer to head of a list
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;

	/* Traversing the list and freeing each node */
	/* introducing the while loop */

	while (*head != NULL)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
	}
	/* Setting head to NULL */
	*head = NULL;
}
