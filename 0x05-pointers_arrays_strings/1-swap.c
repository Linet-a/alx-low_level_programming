#include "main.h"

/**
 * swap_int - swaps value of two intergers
 * @a: pointer to the intereger value to be swapped
 * @b: pointer to the interger value to be swapped
 * Return: Always(0)
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
