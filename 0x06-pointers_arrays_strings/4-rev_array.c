#include "main.h"

/**
 *reverse_array - This is the function
 *@a: this is a variable
 *@n: this is a variable
 *Return: returns 0
*/
void reverse_array(int *a, int n)
{
	int i, b, c = 0;

	for (i = 0; i < n; i++)
	{
		c++;
	}
	for (i = 0; i < c / 2; i++)
	{
		b = a[i];
		a[i] = a[n - 1];
		a[n - 1] = b;
		n--;
	}
}
