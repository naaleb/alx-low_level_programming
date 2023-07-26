#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * minCoins - A function to calculate the minimum number of coins
 *            needed to make change
 * @cents: Amount of money in cents.
 * @coins: An array containing the available coin value
 *
 * Return: Minimum number of coins required to make change.
 */
int minCoins(int cents, int coins[])
{
	int min = cents + 1;
	int i;

	if (cents <= 0)
	return (0);


	for (i = 0; i < 5; i++)
	{
		if (cents >= coins[i])
		{
			int curr_min = 1 + minCoins(cents - coins[i], coins);

			if (curr_min < min)
			{
				min = curr_min;
			}
		}
	}
	return (min);
}

/**
 * main - program starting point.
 * @argc: Argument count.
 * @argv: Array of strings.
 *
 * Return: 0 on success, 1 when error.
 */
int main(int argc, char *argv[])
{
	int coins[] = {25, 10, 5, 2, 1};
	int cents = atoi(argv[1]);
	int result = minCoins(cents, coins);

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}

	printf("%d\n", result);

	return (0);
}
