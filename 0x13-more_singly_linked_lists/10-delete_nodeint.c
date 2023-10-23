#include "lists.h"

/**
 * delete_nodeint_at_index - it deletes the node at index of a listint_t list.
 * @head: the pointer to the list.
 * @index: the position of the node to delete.
 * Return: 1 if successful, -1 if failled.
 **/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *aux_node = *head;
	listint_t *node_to_delete = *head;
	unsigned int idx;
	unsigned int cont = 0;

	/* the border case for empty list */
	if (!(*head))
		return (-1);

	/* delete at the beginning */
	if (index == 0)
	{
		*head = node_to_delete->next;
		free(node_to_delete);
		return (1);
	}

	/* search for the position to delete */
	idx = index - 1;
	while (aux_node && cont != idx)
	{
		cont++;
		aux_node = aux_node->next;
	}

	/* the general case */
	if (cont == idx && aux_node)
	{
		node_to_delete = aux_node->next;
		aux_node->next = node_to_delete->next;
		free(node_to_delete);
		return (1);
	}

	return (-1);
}
