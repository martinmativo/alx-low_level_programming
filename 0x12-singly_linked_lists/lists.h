#ifndef LISTS_H
#define LISTS_H

/*
 * Desc: Header file containing prototypes and definitions for all functions
 *       and types in the directory.
 */

#include <stdlib.h>

/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_v;

size_v print_list(const list_v *m);
size_v list_len(const list_v *m);
list_v *add_node(list_v **head, const char *str);
list_v *add_node_end(list_v **head, const char *str);
void free_list(list_v *head);

#endif /* LISTS_H */
