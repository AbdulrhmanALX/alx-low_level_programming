#include "lists.h"

/**
  *pop_listint - pops list
  *
  *@head: head of list
  *Return: the head node's data
  */

int pop_listint(listint_t **head)
{
	listint_t *cur = *head;
	int pop_int = cur->n;

	if (head == NULL || *head == NULL)
		return (0);

	cur  = cur->next;
	free(*head);
	*head = cur;

	return (pop_int);
}
