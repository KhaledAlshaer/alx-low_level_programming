#include "lists.h"

/**
 *_strlen - This is the function
 *@s: this is a variable
 *Return: returns 0
*/
int _strlen(char *s)
{
	int i = 0;

	if (!s)
		return (0);
	while (*s++)
		i++;

	return (i);
}

/**
 *print_list - This is the function
 *@h: this is a variable
 *Return: returns 0
*/
size_t print_list(const list_t *h)
{
	int c = 0;

	while (h)
	{
		printf("[%d] %s\n", _strlen(h->str), h->str ? h->str : "(nil)");
		h = h->next;
		c++;
	}

	return (c);
}
