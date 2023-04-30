#include "lists.h"
/**
 * free_listint_safe - frees a linked list
 * @h: pointer to the first node in the linked list
 * Return: number of elements that was freed
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *temp;
	size_t l = 0;
	int d;

	if (!h || !*h)
		return (0);
	while (*h)
	{
		d = *h - (*h)->next;
		if (d > 0)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
			l++;
		}
		else
		{
			free(*h);
			*h = NULL;
			l++;
			break;
		}
	}
	*h = NULL;
	return (l);
}
