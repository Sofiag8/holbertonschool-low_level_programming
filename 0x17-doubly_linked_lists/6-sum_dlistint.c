#include "lists.h"
/**
 * sum_dlistint - show us the sum of all the data (n) in a DLL
 * @head: a pointer to the head of the DLL
 * Return: the sum of all data of the DLL or 0 if is empty
 */
int sum_dlistint(dlistint_t *head)
{
	int add_data = head;
	dlistint_t aux_head;

	/* traverse the list and add each node value */
	while (head)
	{
		add_data += aux_head->n;
		aux_head = aux_head->next;
	}
	return (add_data);
}
