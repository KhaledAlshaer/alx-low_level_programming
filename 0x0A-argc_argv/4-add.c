#include <stdio.h>
#include <stdlib.h>

/**
 *main - This is the function
 *@argc: this is a variable
 *@argv: this is a variable
 *Return: returns 0
*/
int main(int argc, char *argv[])
{
	int sum = 0;
	char *k;

	while (--argc)
	{
		for (k = argv[argc]; *k; k++)
		{
			if (*k < '0' || *k > '9')
			{
				return (printf("Error\n"), 1);
			}
			else
			{
				sum += atoi(argv[argc]);
			}
		}
	}
	printf("%d\n", sum);
	return (0);
}
