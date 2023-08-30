#include "lists.h"

/**
 * delete_nodeint_at_index - deletes node at index
 * @head: pointer to pointer to the head of the list
 * @index: index of the list where the node should be deleted
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *check;
	listint_t *loop = *head;
	unsigned int i, j;

	if (*head == NULL)
		return (NULL);

	for (i = 0; i < index; i++)
	{
		if (loop->next == NULL)
			return (-1);
		loop = loop->next;
		check = loop;
		for (j = 0; j < 1; j++)
		{
			check->next;
			if (check == NULL)
				return (-1);
		}
		free(loop);
		
	}

	return (1);
}
