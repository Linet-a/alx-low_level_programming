#include "main.h"
/**
 * flip_bits - flips to get num of bits.
 * @n: number 1
 * @m: number 2
 * Return: num of bits needed to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int diff, res;
	unsigned int k, i;

	k = 0;
	res = 1;
	diff = n ^ m;
	for (i = 0; i < (sizeof(unsigned long int) * 8); i++)
	{
		if (res == (diff & res))
			k++;
		res <<= 1;
	}

	return (k);
}
