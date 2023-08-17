#include "lists.h"
/**
 * dlistint_len - return nbr of element in a linked list
 * @h: head of the list
 * Return: nbr of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	int nb = 0;

	if (h == NULL)
		return (nb);
	while (h->prev != NULL)
		h = h->prev;
	while (h != NULL)
	{
		nb++;
		h = h->next;
	}
	return (nb);
}
