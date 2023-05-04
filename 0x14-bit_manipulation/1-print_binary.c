#include "main.h"
/**
 * _power - calculate base and pow
 * @base: base
 * @pow: power
 * Return: value of base and power
 */
unsigned long int _power(unsigned int base, unsigned int pow)
{
	unsigned long int number;
	unsigned int k;

	number = 1;
	for (k = 1; k <= pow; k++)
		number *= base;
	return (number);
}
/**
 * print_binary - prints the binary representation of a number
 * @n: the unsigned long int to be printed
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int div, res;
	char flg;

	flg = 0;
	div = _power(2, sizeof(unsigned long int) * 8 - 1);

	while (div != 0)
	{
		res = n & div;
		if (res == div)
		{
			flg = 1;
			_putchar('1');

		}
		else if (flg == 1 || div == 1)
		{
			_putchar('0');
		}
		div >>= 1;
	}
}
