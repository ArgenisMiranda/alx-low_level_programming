#include "lists.h"

/**
 * get_nodeint_at_index - Returns the nth node of a linked list.
 * @head: A pointer to the head of the linked list.
 * @index: The index of the node to retrieve (starting from 0).
 *
 * Return: The nth node of the linked list, or NULL if it does not exist.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;
	listint_t *current = head;

	while (current)
	{
		if (count == index)
			return (current);

		count++;
		current = current->next;
	}

	return (NULL);
}
