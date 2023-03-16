#include "main.h"
#include <stdio.h>
#include <stdlib.h>

void *_calloc(unsigned int nmemb, unsigned int size);

/**
 * _calloc - function definition
 * @nmemb: the number of elements
 * @size: the size of the bytes
 * Description: allocates memory for an array of nmemb
 * elements of size bytes
 * Return: a pointer or NULL
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *pointer;
	unsigned int i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	pointer = malloc(nmemb * size);
	if (pointer == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < nmemb * size; i++)
	{
		pointer[i] = 0;
	}

	return (pointer);
}
