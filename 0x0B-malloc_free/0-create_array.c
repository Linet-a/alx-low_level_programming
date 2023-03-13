#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - function declaration
 * @size: size of array
 * @c: chararacter to initialize array
 * Return: a char value
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *arr;

	if (size <= 0)
	{
		return (NULL);
	}
	arr = (char *)malloc(sizeof(char) * size);
	if (arr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}
	return (arr);
}
