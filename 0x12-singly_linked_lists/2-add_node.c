#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - adds a new node at the beginning of the list
 * @head: double pointer to the list
 * @str: string to add in the new node
 *
 * Return: the address of the new element-NULL if fail
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	char *new_str;
	unsigned int len = 0;

	new_node = malloc(sizeof(list_t));
	if (!new_node)
		return (NULL);

	new_str = strdup(str);
	if (!new_str)
	{
		free(new_node);
		return (NULL);
	}

	while (str[len])
		len++;

	new_node->str = new_str;
	new_node->len = len;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
