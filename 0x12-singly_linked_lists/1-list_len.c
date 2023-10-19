#include "lists.h"

/**
 * list_len - will list the lenght of my list
 *@h: list to my pointer
 *
 *Return: return the numb of ele
*/

size_t list_len(const list_t *h)
	{
		size_t elements = 0;

		while (h)
		{
			elements++;
			h = h->next;
		}

		return (elements);
	}

