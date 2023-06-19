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

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
