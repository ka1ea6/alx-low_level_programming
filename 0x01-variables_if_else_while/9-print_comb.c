#include <stdio.h>
/**
 * main - prints all posible combination of single digit nums
 *
 * Return: Always 0 (success)
 *
 */
int main(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			putchar(i + '0');
			putchar(j + '0');
			putchar(',');
		}
	}
	putchar('\n');
	return (0);
}
