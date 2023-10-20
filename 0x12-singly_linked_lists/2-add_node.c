#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - adds a new node at the beginning of the list.
 * @head: the pointer to singly linked list.
 * @str: the pointer to signly linked list.
 *
 *
 * Return: address (new element) or NULL.
 *
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	size_t length = 0;

	new_node = malloc(sizeof(list_t));
	/* failled: return NULL */
	if (new_node == NULL)
		return (NULL);
	/* loop through to find length */
	while (str[length])
		length++;
	/* assign new node to length */
	new_node->len = length;
	/* duplicates the list of new_node */
	new_node->str = strdup(str);
	/* access the next node of new_node assign first node */
	new_node->next = *head;
	/* make the new_node the beginning of the list */
	*head = new_node;
	/* return the new_node */
	return (new_node);
}
