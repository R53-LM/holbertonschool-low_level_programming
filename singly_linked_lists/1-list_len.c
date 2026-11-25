#include "lists.h"

/**
 * print_list - print all the elements
 * @h: it is a nodes
 * Return: the number of nodes
 */
size_t list_len(const list_t *h)
{
size_t n = 0;

	while (h != NULL)
	{
		n++;
		h = h->next;
	}
	return (n);
}
