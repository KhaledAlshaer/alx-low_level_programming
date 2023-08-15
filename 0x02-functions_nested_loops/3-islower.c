#include "main.h"

/**
 *_islower - this detects the lower case letters
 *
 *@c: the character to be checked
 *
 *Return: 1 if  lower case otherwise returns 0 (success)
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
