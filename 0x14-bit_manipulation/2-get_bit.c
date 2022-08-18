#include "main.h"

int get_bit(unsigned long int n, unsigned int index)
{
	int bit;

	if (index > (sizeof(unsigned long int) * 8))
		return (-1);

	bit = ((n >> index) & 1);

	return (bit);
}
