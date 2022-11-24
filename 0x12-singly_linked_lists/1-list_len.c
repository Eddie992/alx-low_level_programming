#include <stdio.h>
#include "lists.h"

/**
 * list_len - functions that returns elements in the links
 *
 * @h: first node in the list
 *
 * Return: number of elements printed
 */
size_t list_len(const list_t *h)
{
	size_t len = 0;

	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		len++;
		h = h->next;
	}
	return (len);
}
