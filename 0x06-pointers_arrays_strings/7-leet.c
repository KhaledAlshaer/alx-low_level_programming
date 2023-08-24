#include "main.h"

/**
 **leet - This is the function
 *@k: this is a variable
 *Return: returns 0
*/
char *leet(char *k)
{
	int i, j;
	char *a = "aAeEoOtTlL";
	char *b = "4433007711";

	for (i = 0; k[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (k[i] == a[j])
			{
				k[i] = b[j];
			}
		}
	}
	return (k);
}
