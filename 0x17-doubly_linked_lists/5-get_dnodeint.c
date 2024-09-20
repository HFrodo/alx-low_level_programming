#include "lists.h"

/**
 * get_dnodeint_at_index - Returns the nth node of a dlistint_t list.
 * @head: The head of the list.
 * @index: The index of the node to retrieve.
 *
 * Return: The address of the node at the specified index, or NULL if it does not exist.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (head != NULL)
	{
		if (i == index)
			return (head);
		head = head->next;
		i++;
	}
	return (NULL);
}
