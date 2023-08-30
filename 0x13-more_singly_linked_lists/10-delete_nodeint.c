#include "lists.h"

/**
 * delete_nodeint_at_index - deletes node at index
 * @head: pointer to pointer to the head of the list
 * @index: index of the list where the node should be deleted
 * @n: data for new node
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *check;
	listint_t *loop = *head;
	unsigned int i;

	if (*head == NULL)
		return (NULL);

	for (i = 0; i < index; i++)
	{
		if (loop->next == NULL)
			return (-1);
		if (i != (index - 1))
			loop = loop->next;
		else
		{
			/* make next of the previous node next of new node*/
			new_node->next = loop->next;

			/* point next of previous node to new node */
			loop->next = new_node;
		}
	}

	return (1);
}
