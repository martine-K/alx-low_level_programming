#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_list - it prints all the elements of a list.h.
 * @h: it is the pointer to the list.
 *
 * if str is NULL print [0] .
 *
 * Return: number of nodes.
 * @return size_t
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;

	/* while we have a pointer to list */
	while (h != NULL)
	{
		/* dereference pointer and check if str is null */
		if (h->str == NULL)
		{
			printf("[%d] %s\n", 0, "(nil)");
		}
		else /* if not NULL */
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		h = h->next;
		count++;
	}
	return (count);
}
