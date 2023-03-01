#include "main.h"

/**
 * *_strcat - append src string to the dest string
 * @dest: pointer to char dest
 * @src: pointer to the char src
 * Return: pointer t the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
	{
	}
	for (j = 0; src[j] != '\0'; j++)
	{
		dest[i] = src[j];
	}
	dest[i] = '\0';
	return (dest);
}
