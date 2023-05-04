#include "main.h"

/**
 * flips_bits - returns the num of bits needed to flip
 * @n: first num
 * @m: second num
 * Return: the num of bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int diff = n ^ m;
	unsigned long int res = 1;
	unsigned int j = 0;
	unsigned int i;

	for (i = 0; i < (sizeof(unsigned long int) * 8); i++)
	{
		if (res == (diff & res))
		{
			j++;
		}
		res <<= 1;
	}
	return (j);
}
