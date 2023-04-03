#include "lists.h"

/**
 * get_nodeint_at_index - gets index node if a particular index
 * @head: head node
 * @index: index of node to be returned
 * Return: pointer to a node in question
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;
	listint_t *temp;

	temp = head;
	while (count != index && temp != NULL)
	{
		count++;
		temp = temp->next;
	}

	if (count != index)
		return (NULL);
	return (temp);
}
