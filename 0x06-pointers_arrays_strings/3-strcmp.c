#include "main.h"

/**
 *_strcmp - This is the function
 *@s1: this is a variable
 *@s2: this is a variable
 *Return: returns 0
*/
int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		else
		{
			return (0);
		}
	}
	return (0);
}
