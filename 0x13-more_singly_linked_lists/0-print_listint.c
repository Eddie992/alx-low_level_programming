#include <stdio.h>
#include <stddef.h>
#include "lists.h"

/**
 * print_listint -is a function that prints all the elements of listint_t
 *
 * @h: head of list to print
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t len;

	if (h == NULL)
		return (0);

	for (len = 0; h != NULL; h = h->next, len++)
		printf("%d\n", h->n);

	return (len);
}
