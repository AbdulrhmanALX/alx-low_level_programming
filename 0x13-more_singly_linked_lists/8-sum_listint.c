#include "lists.h"

/**
  * sum_listint - returns sum of list
  *
  * @head: the head list
  * Return: int sum
  */

int sum_listint(listint_t *head)
{
	listint_t *ptr = head;
	int sum = 0;

	while (ptr)
	{
		sum += ptr->n;
		ptr = ptr->next;
	}

	return (sum);
}
