#include "main.h"

/**
 **_strdup - This is the function
 *@str: this is a variable
 *Return: returns 0
*/
char *_strdup(char *str)
{
	int i, l = 0;
	char *d = NULL;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[l] != '\0')
	{
		l++;
	}
	d = (char *)malloc((l + 1) * sizeof(char));
	if (d == NULL)
	{
		return (NULL);
	}
	for (i = 0; i <= l; i++)
	{
		d[i] = str[i];
	}
	return (d);
}
