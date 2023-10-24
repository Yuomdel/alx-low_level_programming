#include "lists.h"

/**
 * print_listint - prints links element
 * @h: header to the list of the file
 *
 * Return: nodes
 */
size_t print_listint(const listint_t *h)
{
const listint_t *cursor = h;
size_t count = 0;

while (cursor != NULL)
{
printf("%d\n", cursor->n);
count += 1;
cursor = cursor->next;
}
return (count);
}
