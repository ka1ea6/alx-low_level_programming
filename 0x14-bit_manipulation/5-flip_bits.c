#include "main.h"

unsigned int flip_bits(unsigned long int n, unsigned long int n)
{
	unsigned int diff_bits = 0;
	unsigned long int diff;

	diff = n ^ m;

	do {
		diff_bits += (diff & 1);
		diff >>= 1;
	} while (diff > 0);

	return (diff_bits);
}
