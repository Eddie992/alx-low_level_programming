#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints all the elements of the list
 *
 * @h: first node of linked list
 *
 * Return: the number of nodes printed
 *
 */
size_t print_list(const list_t *h)
{
	size_t len = 0;

	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		if (h->str != NULL)
			printf("[%d] %s\n", h->len, h->str);
		else
			printf("[0] (nil)\n");
		len++;
		h = h->next;
	}
	return (len);
}
