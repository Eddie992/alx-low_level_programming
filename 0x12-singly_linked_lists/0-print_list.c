#include "lists.h"
#include <stdio.h>
/**
 * print_list - prints all the elements of the list_t
 *
 * @e: first node of linked list
 *
 * Return: number of nodes printed
 */
size_t print_list(const list_t *e)
{
	size_t len = 0;

	if (e == NULL)
		return (0);
	while (e != NULL)
	{
		if (e->str != NULL)
			printf("[%d] %s\n", e->len, e->str);
		else
			printf("[0] (nil)\n");
		len++;
		e = e->next;
	}
	return (len);
}
