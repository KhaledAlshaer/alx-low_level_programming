#include "lists.h"

/**
 *dlistint_len - this is the function
 *@h: this is a vraiable
 *Return: return 0
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t i = 0;

	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}
