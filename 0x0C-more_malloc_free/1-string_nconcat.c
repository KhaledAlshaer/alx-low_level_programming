#include "main.h"

/**
 **string_nconcat - This is the function
 *@s1: this is a variable
 *@s2: this is a variable
 *@n: this is a variable
 *Return: returns 0
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, l1 = 0, l2 = 0;
	char *k;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (i = 0; s1[i] != '\0'; i++)
	{
		l1++;
	}
	for (i = 0; s2[i] != '\0'; i++)
	{
		l2++;
	}
	if (n >= l2)
	{
		n = l2;
	}
	k = malloc(l1 + n + 1);
	if (k == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < l1; i++)
	{
		k[i] = s1[i];
	}
	for (j = 0; j < n; j++)
	{
		k[i++] = s2[j];
	}
	k[i] = '\0';
	return (k);
}
