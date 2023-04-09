#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index.
 * @n: checking bits
 * @index: the indx to be checked
 *Return: the value in bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int d, result;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	d = 1 << index;
	result = n & d;
	if (result == d)
		return (1);

	return (0);
}
