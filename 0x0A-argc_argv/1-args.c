#include <stdio.h>

/**
 *main - This is the function
 *@argc: this is a variable
 *@argv: this is a variable
 *Return: returns 0
*/
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d", argc - 1);
	return (0);
}
