#include "lists.h"
/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: double pointer to the head of the list
 *
 * Return: the head nodes data (n)
 */
int pop_listint(listint_t **head)
{
	int n = 0;
	listint_t *ptraux;
	/* task condition */
	if (head == NULL)
		return (0);
	/* n is equal to the head de reference to n from the structure */
	/* that is the szie of the list */
	n = (*head)->n;
	/* now temp is the new head node */
	ptraux = *head;
	/* head goes to the next node */
	*head = (*head)->next;
	/* frees temp so the head node is deleted */
	free(ptraux);
	/* return the head nodes data that is n according to the structure */
	return (n);
}
