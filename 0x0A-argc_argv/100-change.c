#include <stdlib.h>
#include <stdio.h>

/**
 * main - calculates the minimum number of cents
 * required to make change for a given amount of money
 *
 * @argc: the number of arguments passed
 * @argv: the arguments passed upon execution.
 * Return: 1 if incorrect arguments passed 0 otherwise.
 */

int main(int argc, char *argv[])
{
	int cents, count = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);
	if (cents < 0)
	{
		printf("%d\n", 0);
		return (0);
	}
	while (cents > 0)
	{
		if (cents >= 25)
		{
			count += 1;
			cents -= 25;
		}
		else if (cents >= 10)
		{
			count += 1;
			cents -= 10;
		}
		else if (cents >= 5)
		{
			count += 1;
			cents -= 5;
		}
		else if (cents >= 2)
		{
			count += 1;
			cents -= 2;
		}
		else if (cents >= 1)
		{
			count += 1;
			cents -= 1;
		}
	}
	printf("%d\n", count);
	return (0);
}
