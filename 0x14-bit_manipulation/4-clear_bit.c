#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index.
 * @n: num  of i
 * @index: the index
 * Return: value of bit
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int k;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	k = ~(1 << index);
	*n = *n & k;

	return (1);
}
