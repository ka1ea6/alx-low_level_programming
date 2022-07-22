#include <stdio.h>

/**
 * main - prints the name of the program
 *
 * @argc: the size of the argv vector
 * @argv: a vector contatining all the arguments passed to the program
 * Return: always 0 (Success)
 */

int main(int __attribute__((unused)) argc, char *argv[])
{
	int i = 0;

	printf("%s\n", argv[i]);
	return (0);
}
