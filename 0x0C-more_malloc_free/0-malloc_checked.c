#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * malloc_checked - function that allocates memmory
 * @b: the interger to check
 * Description: returns pointer to allocated memmory
 * if malloc fails exit code is 98
 * Return: a pointer to allocated memmory
 */
void *malloc_checked(unsigned int b)
{
	void *memory = malloc(sizeof(b));

	if (memory == NULL)
	{
		exit(98);
	}
	return (memory);
}

