#include "lists.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * main - Entry
 * Return: 0
 */
int main(void)
{
	list_t *head;

	head = NULL;
	add_node_end(&head, "Bob");
	add_node_end(&head, "&");
	add_node_end(&head, "Kris");
	add_node_end(&head, "love");
	add_node_end(&head, "asm");
	print_list(head);
	free_list(head);
	head = NULL;
	return (0);
}
