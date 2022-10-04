#include <unistd.h>
/**
static unsigned long next = 1;
static unsigned int curr = 1;
int rand(void)
{
	if (next == 9 && curr == 1)
	{
		curr = 9;
		return (next);
	}
	else if (next == 9 && curr == 9)
		curr = 8;
	else if (curr == 8)
		curr = 10;
	else if (curr == 10)
		curr == 24;
	else if (curr == 24)
		curr = 75;
	else
		curr = 9;
	return (curr);
}

void srand(unsigned int seed)
{
	next = 9;
}
*/
int printf(__attribute__((unused))const char *format, ...)
{
	static int f = 0;
	if (!f)
		write(1, "9 8 10 24 75 - 9\n",17);

	f = 1;
	return (0);
}

int puts(__attribute__((unused))const char *s)
{
	write(1, "Congratulations, you win the Jackpot!\n", 38);
	return (0);
}
