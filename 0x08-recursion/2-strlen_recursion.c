#include "main.h"

int _strlen_recursion(char *s);

/**
 * _strlen_recursion - function definition
 * @s: the string to measure
 * Description: finds the length of a string
 * using recursion
 * Return: the string length
 */

int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s)
	{
		len = _strlen_recursion(s + 1);
		return (len = len + 1);
	}
	return (0);
}
