#include "main.h"

/**
 **_calloc - This is the function
 *@nmemb: this is a variable
 *@size: this is a variable
 *Return: returns 0
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p;
	unsigned int i, t;
	unsigned char *b;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	t = nmemb * size;
	p = malloc(t);
	if (p == NULL)
	{
		return (NULL);
	}
	b = (unsigned char *)p;
	for (i = 0; i < t; i++)
	{
		b[i] = 0;
	}
	return (p);
}
