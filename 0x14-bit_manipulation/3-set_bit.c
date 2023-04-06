#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @index: the index to be checked
 * @n: the given range
 * Return: the valu of bit at th index
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int j = 1UL << index;

	if (index > sizeof(unsigned long int) * 8 - 1)
	{
		return (-1);
	}

	*n |= j;

	return (1);
}
