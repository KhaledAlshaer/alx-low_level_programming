#include "main.h"

/**
 *binary_to_uint - This is the function
 *@b: this is a variable
 *Return: returns 0
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int i, r = 0;

	if (b == NULL)
	{
		return (0);
	}

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '1' && b[i] != '0')
		{
			return (0);
		}

	r = (r << 1) | (b[i] - '0');
	}

	return (r);
}
