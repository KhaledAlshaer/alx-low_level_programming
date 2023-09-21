#include "lists.h"

/**
 *list_len - This is the function
 *@h: this is a variable
 *Return: returns 0
*/
size_t list_len(const list_t *h)
{
	int i = 0;

	while (h)
	{
		h = h->next;
		i++;
	}

	return (i);
}
