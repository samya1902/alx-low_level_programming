#include "lists.h"
/**#include <stddef.h>
#include <stdint.h>**/
/**
 * print_dlistint - prints all the elements of a dlistint_t list
 * @h: head
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	int nb = 0;

	if (h == NULL)
		return (nb);
	while (h->prev != NULL)
		h = h->prev;
	while (h != NULL)
	{
		printf("%d\n", h->n);
		nb++;
		h = h->next;
	}
	return (nb);
}
