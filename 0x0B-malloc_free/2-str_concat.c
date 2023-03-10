#include "main.h"
#include <stdlib.h>

/**
 * str_concat - function definition
 * @s1: the first string
 * @s2: the second string
 * Description: concatenates s1 and s2
 * Return: the concatenated string
 */

char *str_concat(char *s1, char *s2)
{
	char *new_string;
	int i;
	int j = 0;
	int len = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] || s2[i]; i++)
		len++;

	new_string  = malloc(sizeof(char) * len);

	if (new_string == NULL)
		return (NULL);

	for (i = 0; s1[i]; i++)
		new_string[j++] = s1[i];

	for (i = 0; s2[i]; i++)
		new_string[j++] = s2[i];

	return (new_string);
}
