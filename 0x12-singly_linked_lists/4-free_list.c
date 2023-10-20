#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_list -  frees a singly linked list.
 * @head: the pointer to singly linked list.
 *
 * Return: null.
 *
 */

void free_list(list_t *head)
{
	list_t *temp_variable;
	/* assigns temp_variable to head */
	temp_variable = head;

	/* check if NULL, if yes the list is empty and then return */
	while (head != NULL)
	{
		/* save the head */
		temp_variable = head;
		/* make the head point to the next node  */
		head = head->next;
		/* free the str */
		free(temp_variable->str);
		/* free temp_variable list */
		free(temp_variable);
	}
	/* free the head */
	free(head);
}
