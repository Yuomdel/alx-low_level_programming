#include "lists.h"

/**
  * add_node - the  new nodes to list
  * @head: the place in the list
  * @n: int to add to the list
  * Return:return the pointer of the list
  */
list_t *add_node(listint_t **head, const int n)
{
	listint_t *new;

	new = *head;
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;
	return (*head);
}
