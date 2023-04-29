#include "lists.h"
/**
 *  print_listint - Printing elements of a list
 *  @h: const struct listint_t
 *  Return:x size_t
 */
size_t print_listint(const listint_t *h)
{
	size_t bugcount = 0;

/* introducing while loop */
	while (h != NULL)
	{
		printf("%d\n", h->n);
		bugcount++;
		h = h->next;
	}
/* returning bugcount */
	return (bugcount);
}
