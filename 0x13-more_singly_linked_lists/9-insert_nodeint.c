#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position in list
 * @head: pointer to pointer to the head of the list
 * @idx: index of the list where the node should be added
 * @n: data for new node
 *
 * Return: Address of new node or NULL on failure; NULL if impossible to insert
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *loop = *head;
	listint_t *new_node;
	unsigned int i;

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	/* put data in new node */
	new_node->n = n;

	if (*head == NULL)
		return (NULL);

	for (i = 0; i < idx; i++)
	{
		if (loop->next == NULL)
			return (NULL);
		if (i != (idx - 1))
			loop = loop->next;
		else
		{
			new_node->next = loop->next;
			loop->next = new_node;
		}
	}

	return (new_node);
	free(new_node);
}
