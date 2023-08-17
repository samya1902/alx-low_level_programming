#include "lists.h"
/**
 * get_dnodeint_at_index - returns the nth node of a list
 * @head: head of the list
 * @index: index of the searched node
 * Return: nth node or null
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int size = 0;
	dlistint_t *tmp;

	if (head == NULL)
		return (NULL);
	tmp = head;
	while (tmp)
	{
		if (index == size)
			return (tmp);
		size++;
		tmp = tmp->next;
	}
	return (tmp)
}
