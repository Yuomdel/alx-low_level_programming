#include "lists.h"


/**
 *listint_len - element in a linked listint_t list
 *@h: list to the pointers
 *
 *
 *Return: treturn listint_t list
 */

size_t listint_len(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		h = h->next;
	}
	return (nodes);
}

