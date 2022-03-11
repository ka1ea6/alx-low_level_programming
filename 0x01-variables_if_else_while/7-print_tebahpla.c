#include <stdio.h>
/**
 * main - Prints the alphabet in reverse order
 *
 * Return: Always 0 (success)
 *
 */
int main(void)
{
	char alpha[26] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 25; i >= 0; i--)
	{
		putchar(alpha[i]);
	}
	putchar('\n');
	return (0);
}
