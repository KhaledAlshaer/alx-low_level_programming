#include "main.h"

/**
 **_strcat - This is the function
 *@dest: this is a variable
 *@src: this is a variable
 *Return: returns 0
*/
char *_strcat(char *dest, char *src)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
	{
		_putchar(dest[i]);
	}
	for (j = 0; src[j] != '\0'; j++)
	{
		_putchar(src[j]);
	}
	return (dest);
}
