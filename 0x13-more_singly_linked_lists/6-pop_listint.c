#include "lists.h"

/**
 * pop_listint - pops head of the node of a linked list
 * @head: pointer to the first element of the linked list
 * Return: head node dataa and 0 if empty
 */

int pop_listint(listint_t **head)
{
	int value = 0;
	listint_t *temp;

	if (*head == NULL)
		return (value);
	temp = *head;
	value = temp->n;
	free(*head);
	*head = temp->next;

	return (value);
}
