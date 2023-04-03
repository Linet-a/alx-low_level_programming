#include "lists.h"

/**
 * print_listint - the function print integer in list
 * @header: struct listint_t
 * Return:value of size_t
 */

size_t print_listint(const listint_t *header)
{
	size_t count = 0;

	while (header != NULL)
	{
		printf("%d\n", header->n);
		count++;
		header = header->next;
	}

	return (count);
}
