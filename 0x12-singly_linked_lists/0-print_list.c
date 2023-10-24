#include "lists.h"
#include <stdio.h>

/**
 * @m: The list_v list.
 * print_list - Prints all the elements of a list_v list.
 * Return: This returns the number of nodes in m.
 */

size_t print_list(const list_v *m)
{
	size_t nodes = 0;

	while (m)
	{
		if (m->str == NULL)
			printf("[0] (nil)\n");

		else
			printf("[%d] %s\n", m->len, m->str);

		nodes++;
		m = m->next;
	}

	return (nodes);
}
