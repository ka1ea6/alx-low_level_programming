#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * isnum - checks if the passed string is a number
 * @tocheck: string to be checked
 *
 * Return: 0 if string is a number, 1 otherwise
 */

int isnum(char tocheck[])
{
	int i, len = strlen(tocheck);

	for (i = 0; i < len; i++)
	{
		if (!isdigit(tocheck[i]))
		{
			return (1);
		}
	}
	return (0);
}

/**
 * main - prints the sum of the arguments (must be ints)
 *
 * @argc: the number of arguments passed/
 * @argv: the arguments passed
 * Return: 0 if all numbers passed 1 otherwise.
 */

int main(int argc, char *argv[])
{
	int i, sum;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	else
	{

		for (i = 1; i < argc; i++)
		{
			if (isnum(argv[i]))
			{
				printf("Error\n");
				return (1);
			}
			else
			{
				sum += atoi(argv[i]);
			}
		}
		printf("%d\n", sum);
	}
	return (0);
}
