#include "main.h"
/**
 * flip_bits - returns num of bit to flip to get from one num to another.
 * @n: the first number
 * @m: the second number
 * Return: the number of bits you would need to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int diff = n ^ m;
	unsigned long int res = 1;

	unsigned int k, i;

	k = 0;

	for (i = 0; i < (sizeof(unsigned long int) * 8); i++)
	{
		if (res == (diff & res))
			k++;
		res <<= 1;
	}

	return (k);
}
