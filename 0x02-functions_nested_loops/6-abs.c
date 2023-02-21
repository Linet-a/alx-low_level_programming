#include "main.h"

/**
 * _abs - computes the ansolute value of an integer
 * @n: The number to be computed
 * Return: 0 (Success)
 */

int _abs(int n)
{
	if (n < 0)
	{
		n *= -1;
	}
	return (n);

}
