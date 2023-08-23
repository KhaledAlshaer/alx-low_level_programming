#include "main.h"

/**
 **_strcat - This is the function
 *@dest: this is a variable
 *@src: this is a variable
 *Return: returns 0
*/
char *_strcat(char *dest, char *src)
{
	int i, j, k, n = 0, c = 0;

	for (i = 0; dest[i] != '\0'; i++)
	{
		n++;
	}
	for (j = 0; src[j] != '\0'; j++)
	{
		c++;
	}
	for (k = 0 ; k <= c; k++)
	{
		dest[n + k] = src[k];
	}
	return (dest);
}
