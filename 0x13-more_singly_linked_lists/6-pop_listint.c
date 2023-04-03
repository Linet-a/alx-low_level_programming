#include "lists.h"

/**
 * pop_listint - pops head of the node of a linked list
 * @head: pointer to the first element of the linked list
 * Return: head node dataa and 0 if empty
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int number;

	if (!head || !*head)
	return 0;

	number = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (number);
}
