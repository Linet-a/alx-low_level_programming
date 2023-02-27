#include "main.h"

/**
 * _strlen - a function that returns the length of a string
 * @s: a pointer to the string to be counted
 * Return: string length
 */

int _strlen(char *s)
{
	int count = 0;

	while (*s != '\0')
	{
		count++;
		s++;
	}
	return (count);
}
