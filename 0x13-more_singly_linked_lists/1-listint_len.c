#include "lists.h"

/**
 *listint_len - This is the function
 *@h: this is a variable
 *Return: returns 0
*/
size_t listint_len(const listint_t *h)
{
	size_t c = 0;

	while (h != NULL)
	{
		c++;
		h = h->next;
	}

	return (c);
}
