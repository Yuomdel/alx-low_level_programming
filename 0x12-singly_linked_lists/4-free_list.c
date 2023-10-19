#include "lists.h"

/**
 *free_list - the free list
 *@head: the pointer to the list 
 *
 * return: my list
 */

void free_list(list_t *head)
{
	list_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head->str);
		free(head);
		head = tmp;
	}
}
