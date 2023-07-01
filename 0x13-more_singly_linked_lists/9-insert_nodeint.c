#include "lists.h"

/**
 * insert_nodeint_at_index - insetr a node at index idx
 *
 * @head: the head node of list
 * @idx: the index to add the node at it
 * @n: int to be stored
 *
 * Return: the address of the new head node, or NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *ptr = *head;
	unsigned int i = 0;
	listint_t *new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (head == NULL)
		return (NULL);

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (*head);
	}

	while (ptr && i < idx - 1)
	{
		ptr = ptr->next;
		i++;
	}

	if (ptr == NULL)
		return (NULL);

	new->next = ptr->next;
	ptr->next = new;

	return (*head);
}
