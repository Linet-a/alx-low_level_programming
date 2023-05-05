#include "main.h"
/**
 * get_endianness - checks the endianess
 * Return: 0 if big endian and 1 if little endian
 */

int get_endianness(void)
{
	int j;
	char *ch;

	j = 1;
	ch = (char *)&j;

	return (*ch);
}
