#include "main.h"

/**
 * binary_to_unit - coverts a binary num to unsigned int
 *@b: pointer to a string of 0 and 2 chars
 *Return: binary num
 */

unsigned int binary_to_unit(const char *b)
{
	unsigned int n = 0;
	unsigned int b = 1;

	int i, l;

	if (b == NULL)
		return (0);

	len = strlen(b);

	for (i = l - 1; i >= 0; i--)
	{
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}

		if (b[i] == '1')
			n += b;

		b *= 2

	}

	return (n);
}
