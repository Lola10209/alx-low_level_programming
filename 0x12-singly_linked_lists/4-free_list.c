#include "lists.h"

/**
 * free_list - frees a list
 * @head: head of the linked list.
 * Return: no return.
 */

void free_list(list_t *head)
{
	list_t *current;

	while ((current = head) != Null)
	{
		head = head->next;
		free(current->str);
		free(current);
	}
}
