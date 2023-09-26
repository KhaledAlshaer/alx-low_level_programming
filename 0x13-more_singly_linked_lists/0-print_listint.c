#include "lists.h"

/**
 *print_listint - This is the function
 *@h: this is a variable
 *Return: returns 0
*/
size_t print_listint(const listint_t *h)
{
	size_t c = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		c++;
		h = h->next;
	}

	return (c);
}
