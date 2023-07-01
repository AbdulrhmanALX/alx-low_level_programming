#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * reverse_listint - reverses a linked list
  * @head: the first node of the linked list
  * Return: the first node of reversed list
  */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *cur, *tmp;

	if (head == NULL || *head == NULL)
		return (NULL);
	if ((*head)->next == NULL)
		return (*head);

	tmp = (*head)->next;
	(*head)->next = NULL;
	cur = tmp;

	while (cur)
	{
		tmp = cur->next;
		cur->next = *head;
		*head = cur;
		cur = tmp;
	}
	return (*head);
}
