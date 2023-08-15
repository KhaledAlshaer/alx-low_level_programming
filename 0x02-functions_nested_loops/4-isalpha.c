#include "main.h"

/**
 *_isalpha - checks for alphabet letters
 *@c: character to be checked
 *Return: returns 1 if there is an alphabet letter returns 0 otherwise
 */
int _isalpha(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
