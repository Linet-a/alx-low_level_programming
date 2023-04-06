#include "main.h"

/**
 * binary_to_unit - coverts a binary num to unsigned int
 *@b: pointer to a string of 0 and 2 chars
 *Return: binary num
 */

unsigned int binary_to_unit(const char *b)
{
	unsigned int n = 0;

	if (b == NULL)
	{
		return (0);
	}

	for (; *b != '\0'; b++)
	{
		if (*b != '0' && *b != '1')
		{
			return (0);
		}

		n = n << 1;
		n += (*b - '0');
	}

	return (n);
}
