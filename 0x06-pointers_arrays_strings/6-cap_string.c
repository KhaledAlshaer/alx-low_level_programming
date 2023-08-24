#include "main.h"

/**
 * cap_string - Capitalizes the first letter of each word in a string
 * @str: The input string
 *
 * Return: Pointer to the modified string
 */
char *cap_string(char *str)
{
	int i;

	/* Capitalize the first letter of the string*/
	if (str[0] >= 'a' && str[0] <= 'z')
	str[0] = str[0] - 'a' + 'A';

	for (i = 1; str[i] != '\0'; i++)
	{
	/* Check if the current character is a separator*/
	if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' ||
	str[i] == ',' || str[i] == ';' || str[i] == '.' ||
	str[i] == '!' || str[i] == '?' || str[i] == '"' ||
	str[i] == '(' || str[i] == ')' || str[i] == '{' || str[i] == '}')
	{
		/* Capitalize the next character if it's a letter*/
		if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
		{
			str[i + 1] = str[i + 1] - 'a' + 'A';
		}
	}
	}
	return (str);
}
