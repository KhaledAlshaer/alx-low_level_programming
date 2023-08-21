#include "main.h"

/**
 **_strcpy - This is the function
 *@dest: this is a variable
 *@src: this is a variable
 *Return: returns dest
*/
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}
