#include "lists.h"
/**
 * nodeint_at_index - deletes the node of an index
 * @head: pointer to the first element in the list
 * @index: index of the node to delete
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp = *head;
	listint_t *Nod = NULL;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}
	while (i < index - 1)
	{
		if (!temp || !(temp->next))
			return (-1);
		temp = temp->next;
		i++
	}
	Nod = temp->next;
	temp->next = Nod->next;
	free(Nod);
	return (1);
}
