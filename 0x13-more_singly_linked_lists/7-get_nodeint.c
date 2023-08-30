#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of linked list
 * @head: pointer to pointer to the head of the list
 * @index: index of the node, starting at 0
 *
 * Return: Head node's data (n), NULL if node does not exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; i < index; i++)
	{
		if (head->next == NULL)
			return (NULL);
		head = head->next;
	}

	return (head);
}
