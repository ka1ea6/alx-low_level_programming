#include <stdio.h>
#include <stdlib.h>

/**
 * main - accepts input and prints their multiple
 * @argc: number of arguments passed
 * @argv: the arguments passed
 *
 * Return: 0 if two numbers are passed else 1
 */

int main(int argc, char *argv[])
{
	int mul;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		mul = (atoi(argv[1]) * atoi(argv[2]));

		printf("%d\n", mul);
	}

	return (0);
}

