#include "lists.h"
/**
 * delete_dnodeint_at_index - delete node at an index
 * @head: head
 * @index: index of element
 * Return: 1 o success, otherwise -1
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *h1;
	dlistint_t *h2;
	unsigned int i = 0

	h1 = *head;
	if (h1 != NULL)
		while (h1->prev != NULL)
			h1 = h1->prev;
	while (h1 != NULL)
	{
		if (i == index)
		{
			if (i == 0)
			{
				*head = h1->next;
				if (*head != NULL)
					(*head)->prev =NULL;
			}
			else
			{
				h2->next = h1->next;
				if (h1->next != NULL)
					h1->next->prev = h2;
			}
			free(h1);
			return (1);
		}
		h2 = h1;
		h1 = h1->next;
		i++;
	}
	return (-1);
}
