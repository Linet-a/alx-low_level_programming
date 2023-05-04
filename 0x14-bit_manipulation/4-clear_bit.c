#include "main.h"

/**
 * clear_bit - sets the value of a bit 0 at a given index
 * @index: index starting from 0 of the bit to be set
 * @n: pointer to the unsigned long int
 * Return: 1 if sucessful otherwise -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int j;

	if (index > (sizeof(unsigned long int) * 8 - 1))
	{
		return (-1);
	}
	j = ~(1 << index);
	*n = *n & j;

	return (1);
}
