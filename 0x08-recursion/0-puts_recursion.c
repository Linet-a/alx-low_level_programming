#include "main.h"

/**
 * _puts_recursion - prints a string followed by anew line
 * @s: string
 * Description: recurses through string s
 * Return: void
 */

void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(++s);
	}
	else
	{
		_putchar('\n');
	}
}
