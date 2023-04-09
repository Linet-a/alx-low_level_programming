#include "main.h"

/**
 * set_bit - the value of a bit to 1 at a given index.
 * @index: the given index
 * @n: pointer number of i
 * Return: the value of bit
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int k;

	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	k = 1 << index;
	*n = *n | k;

	return (1);
}
