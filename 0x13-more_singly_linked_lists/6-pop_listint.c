#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - delets the head node and returns the data
 * 0 otherwise
 *
 * @head: head of list
 *
 * Return: value of node, or 0 if list empty
 */
int pop_listint(listint_t **head)
{
	int n;
	listint_t *next;

	if (head == NULL || *head == NULL)
		return (0);

	n = (*head)->n;
	next = (*head)->next;
	free(*head);
	*head = next;
	return (n);
}
