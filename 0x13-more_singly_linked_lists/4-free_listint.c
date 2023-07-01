#include "lists.h"

/**
 *free_listint - frees list
 *
 *@head: head of list
 *Return: void
 */

void free_listint(listint_t *head)
{
	listint_t *cur;

	while (head)
	{
		cur = head->next;
		free(head);
		head = cur;
	}

}
