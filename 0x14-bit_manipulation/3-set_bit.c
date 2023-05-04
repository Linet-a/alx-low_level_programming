#include "main.h"

/**
 * set_bit - sets value of a bit to 1 at a given index
 * @n: pointer to the unsigned long int
 * @index: the index
 * Return: 1 if sucessfula and -1 for failure
 *
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int b;

	if (index > 63)
	{
		return (-1);
	}
	b = 1 << index;
	*n = (*n | b);

	return (1);
}
