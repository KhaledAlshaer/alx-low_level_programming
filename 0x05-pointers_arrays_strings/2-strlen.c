#include "main.h"

/**
 *_strlen - This is the function
 *@s: this is a variable
 *Return: returns 0
*/
int _strlen(char *s)
{
	int i;

	for (i = 0; *s != '\0'; s++)
	{
		i++;
	}
	return (i);
}
