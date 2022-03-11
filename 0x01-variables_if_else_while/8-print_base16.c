#include <stdio.h>
/**
 * main - prints all hexadecimal digits
 *
 * Return: Always 0 (success)
 *
 */
int main(void)
{
	char nums[10] = "0123456789";
	char alphas[6] = "abcdef";
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(nums[i]);
	}
	for (i = 0; i < 6; i++)
	{
		putchar(alphas[i]);
	}
	putchar('\n');
	return (0);
}
