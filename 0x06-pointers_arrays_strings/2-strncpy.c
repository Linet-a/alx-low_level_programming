#include "main.h"

/**
 * *_strncpy - a function that copies a string
 * @dest: input char
 * @src: input char
 * @n: input int
 *
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int j;

	while (j < n && src[j] != '\0')
	{
		dest[j] = src[j];
		j++;
	}
	while (j < n)
	{
		dest[j] = '\0';
		j++;
	}
	return (dest);
}
