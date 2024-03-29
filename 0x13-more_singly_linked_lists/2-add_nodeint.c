#include "lists.h"

/**
  * add_nodeint - add node at beginning
  *
  * @head: head node
  * @n: int data
  * Return: pointer of list
  */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t));

	if (head == NULL)
		return (NULL);

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (*head);
}
