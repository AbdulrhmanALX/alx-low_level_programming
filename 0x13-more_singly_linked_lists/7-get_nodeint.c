#include "lists.h"

/**
  * get_nodeint_at_index - returns the nth node of a list
  *
  * @head: the head of list
  * @index: the index to be returned
  * Return: pointer to list
  */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *ptr = head;
	unsigned int i = 0;

	while (ptr && i < index)
	{
		ptr = ptr->next;
		i++;
	}
	if (ptr == NULL)
		return (NULL);

	return (ptr);
}
