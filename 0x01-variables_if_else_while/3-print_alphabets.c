#include <stdio.h>
/**
 * main - entry point and prints alphabets
 *
 * Return: Always 0 (success)
 *
 */
int main(void)
{
	char alph[26] = "abcdefghijklmnopqrstuvwxyz";
	char ALPH[26] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i, j;

	for (i = 0; i < 26; i++)
	{
		putchar(alph[i]);
	}
	for (j = 0; j < 26; j++)
	{
		putchar(ALPH[j]);
	}
	putchar('\n');
	return (0);
}
