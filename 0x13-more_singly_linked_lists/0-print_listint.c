#include "lists.h"
/**
 * print_listint - prints all the elements of a listint_t
 * @h: linked list
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t nb = 0;

	while (h)
	{
		printf("%d\n", h->n);
		nb++;
		h = h->next;
	}
	return (nb);
}
