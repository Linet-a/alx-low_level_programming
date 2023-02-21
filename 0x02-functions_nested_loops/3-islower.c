#include "main.h"
/**
 * _islower - checks for lowercase character
 * @c: character to be checked
 * Return: 1 for lowercase character or o for anything else
 */
int _islower(int c)
{
	char c;

	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}

