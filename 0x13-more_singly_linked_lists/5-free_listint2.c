#include "lists.h"
/**
 * free_listint2 - frees listint_t
 * @head: double pointer to the head of the list
 * Return: void
 */
void free_listint2(listint_t **head)
{
	while (*head)
	{
		/* use a temporary pointer to the next node */
		listint_t *next = (*head)->next;
		free(*head);
		*head = next;
	}
}
