#include "lists.h"
#include <stdio.h>

/**
 * print_list - This Prints all the available elements of a list_t list.
 * @h: The existing list_t list.
 *
 * Return: The number of nodes to be printed.
 */

size_t print_list(const list_t *h)
{
	size_t m = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");

		else
			printf("[%d] %s\n", h->len, h->str);

		m++;
		h = h->next;
	}

	return (nodes);
}
