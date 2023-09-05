#include "main.h"

/**
 **str_concat - This is the function
 *@s1: this is a variable
 *@s2: this is a variable
 *Return: returns 0
*/
char *str_concat(char *s1, char *s2)
{
	int i, j, k, l1 = 0, l2 = 0;
	char *c;

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
	c = malloc((l1 + l2 + 1) * sizeof(char));
	for (j = 0; j < l1; j++)
	{
		c[j] = s1[j];
	}
	for (k = 0; k < l2; k++)
	{
		c[j++] = s2[k];
	}
	c[j] = '\0';
	return (c);
}
