#include "lists.h"

/**
 * print_listint - prints elements of a linked list
 * @e: linked list of type listint_t to print
 *
 * Return: number total number of nodes
 */
size_t print_listint(const listint_t *e)
{
	size_t num_of_nodes = 0;

	while (e)
	{
		printf("%d\n", e->n);
		num_of_nodes++;
		e = e->next;
	}

	return (num_of_nodes);
}
