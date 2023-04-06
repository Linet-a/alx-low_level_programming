#include "main.h"

/**
 * get_bit - get value of a bit at given index
 * @index: given index
 * @n: the range
 * Return: value of bit at index
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int j = 1;

	if (index > sizeof(unsigned long int) * 8 - 1)
	{
		return (-1);
	}

	j <<= index;

	return ((n & j) ? 1 : 0);
}
