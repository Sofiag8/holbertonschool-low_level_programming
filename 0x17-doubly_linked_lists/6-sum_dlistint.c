#include "lists.h"
/**
 * sum_dlistint - show us the sum of all the data (n) in a DLL
 * @head: a pointer to the head of the DLL
 * Return: the sum of all data of the DLL or 0 if is empty
 */
int sum_dlistint(dlistint_t *head)
{
	int add_data;

	if (head == NULL)
		return (0);
	/* traverse the list and add each node value */
	while (head)
	{
		add_data += head->n;
		head = head->next;
	}
	return (add_data);
}
