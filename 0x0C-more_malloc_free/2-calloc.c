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

	t = (size_t)nmemb * size;
	p = malloc(t);
	b = (unsigned char *)p;
	if (p == NULL)
	{
		return (NULL);
	}
	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	for (i = 0; i < t; i++)
	{
		b[i] = 0;
	}
	return (p);
}
