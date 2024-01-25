#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node in a dlistint_t
 *                            list at a given position.
 * @h: A pointer to the head of the dlistint_t list.
 * @psx: The position to insert the new node.
 * @m: The integer for the new node to contain.
 *
 * Return: If the function fails - NULL.
 *         Otherwise - the address of the new node.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int psx, int m)
{
	dlistint_t *tmp = *h, *new;

	if (psx == 0)
		return (add_dnodeint(h, m));

	for (; psx != 1; psx--)
	{
		tmp = tmp->next;
		if (tmp == NULL)
			return (NULL);
	}

	if (tmp->next == NULL)
		return (add_dnodeint_end(h, m));

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->m = m;
	new->prev = tmp;
	new->next = tmp->next;
	tmp->next->prev = new;
	tmp->next = new;

	return (new);
}
