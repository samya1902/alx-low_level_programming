#include "lists.h"
/**
 * get_nodeint_at_index - eturns the nth node of a listint_t
 * @head: first node in the linked list
 * @index: index of the node to return
 * Return: pointer to the node n, or null
 * if the node does not exist.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp = head;
	unsigned int i = 0;

	while (temp && i < index)
	{
		temp = temp->next;
		i++;
	}
	if (temp)
		return (temp);
	else
		return (NULL);
}
