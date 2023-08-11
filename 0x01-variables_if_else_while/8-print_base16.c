#include <stdio.h>

/**
 *main - This is the main function
 *Return: always returns 0
 */
int main(void)
{
	int i;
	char j;

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
	}
	for (j = 'A'; j <= 'F'; j++)
	{
		putchar(j);
	}
	putchar('\n');
	return (0);
}
