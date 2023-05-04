#include "main.h"

/**
 * get_bit - return value of a bi at a given index
 * @n: checking bits
 * @index: index of the bit to be returned
 * Return: the bit value
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int d, result;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	d = 1 << index;
	result = n & d;
	if (result == d)
	{
		return (1);
	}

	return (0);
}
