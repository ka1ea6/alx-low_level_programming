#include <stdio.h>

/**
 * main - prints the name of the program
 *
 * @argc: the size of the argv vector
 * @argv: a vector contatining all the arguments passed to the program
 */

int main(int __attribute__((unused)) argc, char *argv[])
{
	printf("%s\n", argv[0]);
	return 0;
}
