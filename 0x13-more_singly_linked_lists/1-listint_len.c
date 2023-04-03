#include "lists.h"
/**
 * listint-len -len of list
 * @header: struct to traverse
 * Return: num of elements 
 */

size_t listint_len(const listint_t *header)
{
	size_t count = 0; /*initializing counter to zero*/

	while (header != NULL)
	{
		count++;
		header = header->next;
	}

	return(count);
}
