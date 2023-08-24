#include "main.h"

/**
 **string_toupper - This is the function
 *@k: this is a variable
 *Return: returns 0
*/
char *string_toupper(char *k)
{
	int i;

	for (i = 0; k[i] != '\0'; i++)
	{
		if (k[i] >= 'a' && k[i] <= 'z')
		{
			k[i] = k[i] - 32;
		}
	}
	return (k);
}
