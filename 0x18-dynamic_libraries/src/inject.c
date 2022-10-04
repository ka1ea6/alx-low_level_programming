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
