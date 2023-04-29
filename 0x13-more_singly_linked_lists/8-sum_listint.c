#include "lists.h"
/**
 * sum_listint - returns the sum of all the data (n) of a listint_t
 * @head: first node in the linked list
 * Return: sum
 */
int sum_listint(listint_t *head)
{
	listint_t *temp = head;
	int sum = 0;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
