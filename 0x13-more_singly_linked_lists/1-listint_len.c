#include <stdio.h>
#include <stddef.h>
#include "lists.h"

/**
 * listint_len - is a function that returns number of elements in a
 *a linked list
 *
 * @h: list to get length of
 *
 * Return: length of list
 */
size_t listint_len(const listint_t *h)
{
	size_t len;

	if (h == NULL)
		return (0);

	for (len = 0; h != NULL; h = h->next, len++)
		;

	return (len);
}
