#include <stdio.h>

/**
 * main - This is the main function
 *Return: always 0
 */
int main(void)
{
	printf("Size of a char: %lu byte(s)", sizeof(char));
	printf("sizeof Size of an int: %lu",sizeof(int));
        printf("Size of a long int: %lu",sizeof(long int));
        printf("Size of a long long int: %lu",sizeof(long long int));
       	printf("Size of a float: %lu",sizeof(float));
	return 0;
}
