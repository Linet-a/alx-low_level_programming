#include "main.h"

/**
 * reverse_array - reverses ontent of array of intergers
 * @a: input array
 * @n: number of element to swap
 *
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i, temp;

	for (i = 0; i < n--; i++)
	{
		temp = a[i];
		a[i] = a[n];
		a[n] = temp;
	}
}
