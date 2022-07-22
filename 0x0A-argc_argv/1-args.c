#include <stdio.h>

/**
 * main - prints the number of arguments passed upon execution
 *
 * @argc: the number of arguments passed to the program upon execution
 * @argv: the arguments passed to the program upon execution
 * Return: always 0 (success);
 */

int main(int argc, char __attribute__((unused)) *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
