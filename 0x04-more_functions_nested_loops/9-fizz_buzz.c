#include <stdio.h>

/**
 * main - implements the fizzBuzz excercise
 *
 * Return: Always 0 (success).
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 15 == 0)
		{
			printf(" FizzBuzz ");
			continue;
		}
		else if (i % 5 == 0)
		{
			printf(" Buzz ");
			continue;
		}
		else if (i % 3 == 0)
		{
			printf(" Fizz ");
			continue;
		}
		else
		{
			printf("%d ", i);
			continue;
		}
	}
	printf("\n");
	return (0);
}
