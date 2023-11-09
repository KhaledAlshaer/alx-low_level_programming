#include "lists.h"

/**
 *print_dlistint - this is the function
 *@h: this is a vraiable
 *Return: return 0
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t i = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
