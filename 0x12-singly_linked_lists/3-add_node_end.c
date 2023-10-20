#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - it adds a new node at the end of list.
 * @head: the pointer to singly linked list.
 * @str: the pointer to signly linked list.
 *
 *
 * Return: address of new element or NULL if it failed.
 *
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *last;
	size_t length = 0;

	new_node = malloc(sizeof(list_t));
	/* if faille return NULL */
	if (new_node == NULL)
		return (NULL);
	/* loop through to find length */
	while (str[length])
		length++;
	/* assign the new_node to length */
	new_node->len = length;
	/* duplicate the new_node */
	new_node->str = strdup(str);
	/* if  no head/linked list make new_node as head */
	if (*head == NULL)
	{
		new_node->next = *head; 
		
		head = new_node;
	}
	else
	{	
		new_node->next = NULL;
		last = *head;
		
		while (last->next)
			last = last->next;
		
		last->next = new_node;
	}
	return (new_node);
}
