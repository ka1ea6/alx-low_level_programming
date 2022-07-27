#include <stdlib.h>
#include <stdio.h>

/**
 * calc_cents - calculates the minimum number of cents
 * required to make change for a given amount of money
 *
 * @argc: the number of arguments passed
 * @argv: the arguments passed upon execution.
 * Return: 1 if incorrect arguments passed 0 otherwise.
 */

int calc_cents(int argc, char *argv[])
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
		return (1);
	}
	while (cents >= 0)
	{
		if (cents >= 25)
		{
			count++;
			cents -= 25;
			break;
		}
		else if (cents >= 10)
		{
			count++;
			cents -= 10;
			break;
		}
		else if (cents >= 5)
		{
			count++;
			cents -= 5;
			break;
		}
		else if (cents >= 2)
		{
			count++;
			cents -= 2;
			break;
		}
		else if (cents >= 1)
		{
			count++;
			cents -= 1;
			break;
		}
		break;
	}
	printf("%d\n", count);
	return (0);
}
