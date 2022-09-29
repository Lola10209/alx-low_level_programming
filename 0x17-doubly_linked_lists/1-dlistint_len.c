#include "lists.h"

/**
 * dlistint_len - return the number of elements in a linked dlistint_t list.
 * @n: pointer to the list.
 * Return: number of nodes.
 */
size_t dlistint_len(const dlistint_t *n)
{
	const dlistint_t *node = n;
	size_t cont = 0;

	while (node)
	{
		cont++;
		node = node->next;
	}

	return (cont);
}
