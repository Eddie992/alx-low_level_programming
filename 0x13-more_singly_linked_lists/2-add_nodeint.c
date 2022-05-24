#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - is a functions that adds a new node at the list
 *
 * @head: head of list to add node to
 * @n: value to give n in node
 *
 * Return: the address of the new element
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ptr;

	if (head == NULL)
		return (NULL);
	ptr = malloc(sizeof(listint_t));
	if (ptr == NULL)
		return (NULL);

	ptr->n = n;
	ptr->next = *head;
	*head = ptr;
	return (*head);
}
