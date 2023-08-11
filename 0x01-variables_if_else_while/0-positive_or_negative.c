#include <stdlib.h>
#include <time.h>

/**
 *main - This is the main function
 *Return: always returns 0
 */ 
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n>0) {
	printf("The number is positive");
	}
       	else if (n<0) {
	printf("The number is negative");
	}
	else {
	printf("The number is zero");
	}
	return (0);
}
