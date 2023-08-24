#include "main.h"

/**
 *_strcmp - This is the function
 *@s1: this is a variable
 *@s2: this is a variable
 *Return: returns 0
*/
int _strcmp(char *s1, char *s2)
{
	int i, j, r;

	for (i = 0; s1[i] != '\0'; i++)
	{
		for (j = 0; s2[j] != '\0'; j++)
		{
			r = s1[i] - s2[j];
		}
	}
	return (r);
}
