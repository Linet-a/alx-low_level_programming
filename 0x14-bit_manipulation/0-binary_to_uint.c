#include "main.h"

/**
 * binary_to_uint - converts binary number to unsigned int
 * @b: binary number
 *
 * Return: the conveted usigned int or 0 if null
 */

unsigned int binary_to_uint(const char *b)
{

	int k;
	unsigned int j = 0;

	if (!b)
	{
		return (0);
	}

	for (k = 0; b[k] != '\0'; k++)
	{
		if (b[k] != '0' && b[k] != '1')
			return (0);
	}
	for (k = 0; b[k] != '\0'; k++)
	{
		j <<= 1;
		if (b[k] == '1')
			j += 1;
	}

	return (j);
}
