#include "lists.h"

/**
  * delete_nodeint_at_index - deletes node
  *
  * @head: the head node
  * @index: the index
  * Return: 1 if it succeeded, -1 if it failed
  */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *ptr, *tmp;
	unsigned int i = 0;

	if (head == NULL || *head == NULL)
		return (-1);

	if (index == 0)
	{
		ptr = (*head)->next;
		free(*head);
		*head = ptr;

		return (1);
	}

	ptr = *head;

	while (ptr && i < index - 1)
	{
		ptr = ptr->next;
		i++;
	}

	tmp = ptr->next;
	ptr->next = ptr->next->next;
	free(tmp);

	return (1);
}
