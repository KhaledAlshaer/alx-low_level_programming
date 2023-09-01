#include <stdio.h>
#include <stdlib.h>

/**
 *main - This is the function
 *@cents: this is a variable
 *Return: returns 0
*/
int minCoins(int cents);
int main(int argc, char *argv[])
{
	int cents, numCoins;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);
	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}
	numCoins = minCoins(cents);
	printf("%d\n", numCoins);
	return (0);
}
/**
 * minCoins - calculates the minimum number of coins needed to make change
 * @cents: The amount in cents
 *
 * Return: The minimum number of coins
 */
int minCoins(int cents)
{
	int coins = 0;

	while (cents > 0)
	{
		if (cents >= 25)
			cents -= 25;
		else if (cents >= 10)
			cents -= 10;
		else if (cents >= 5)
			cents -= 5;
		else if (cents >= 2)
			cents -= 2;
		else
			cents -= 1;
		coins++;
	}
	return (coins);
}
