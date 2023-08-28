#include "main.h"

/**
 **_strchr - This is the function
 *@s: this is a variable
 *@c: this is a variable
 *Return: returns 0
*/
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (*s == c)
	{
		return (s);
	}
	return (NULL);
}
