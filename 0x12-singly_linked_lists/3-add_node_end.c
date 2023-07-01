#include "lists.h"

/**
 * add_node_end - adds a new node to the end of linked list
 * @head: double pointer to a linked list
 * @str: string to add to the new node
 *
 * Return: pointer to the new node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *tmp = malloc(sizeof(list_t));
	list_t *ptr = *head;

	if (tmp == NULL)
		return (NULL);

	tmp->str = strdup(str);
	tmp->len = strlen(str);
	tmp->next = NULL;

	if (*head == NULL)
	{
		*head = tmp;
		return (tmp);
	}
	while (ptr->next)
	{
		ptr = ptr->next;
	}

	ptr->next = tmp;

	return (*head);
}
