#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *main - This is the main function
 *Return: always returns 0
 */
int main(void)
{
	int n,i;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	i = n % 10;
	if (i > 5)
	{
	printf("Last digit of %d is %d  and is greater than 5", n,i);
	}
	else if (i < 6 && i != 0)
	{
	printf("Last digit of %d is %d and is less than 6 and not 0", n,i);
	}
	else
	{
	printf("Last digit of %d is %d and is 0", n,i);
	}
	return (0);
}
