
 

#include "lists.h"

/**
 * delete_nodeint_at_index - delete node
 * @head: head node
 * @index: index of node to be deleted
 * Return: boolean value
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *_delete;
	unsigned int counter = 0;

	temp = *head;
	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		temp = temp->next;
		free(*head);
		*head = temp;
		return (1);
	}
	else
	{
		while (temp != NULL && counter != index - 1)
		{
			counter++;
			temp = temp->next;
		}
		if (counter != index - 1)
			return (-1);
		_delete = temp->next;
		temp->next = temp->next->next;
		free(_delete);
		return (1);
	}
}
