#include "main.h"

/**
 **_strncat - This is the function
 *@dest: this is a variable
 *@src: this is a variable
 *@n: this is a variable
 *Return: returns 0
*/
char *_strncat(char *dest, char *src, int n)
{
	int i, c = 0;

	for (i = 0; dest[i] != '\0'; i++)
	{
		c++;
	}
	for (i = 0; i < n && *src != '\0'; i++)
	{
		dest[c + i] = *src;
		src++;
	}
	dest[c + i] = '\0';
	return (dest);
}
