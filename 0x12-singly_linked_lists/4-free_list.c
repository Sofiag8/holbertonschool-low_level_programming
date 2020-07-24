#include "lists.h"
/**
 * free_list - frees list_t
 * @head: pointer to the head of the list
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *firstnode;

	while (head != NULL)
	{
		firstnode = head;
		head = head->next;
		free(firstnode->str);
			free(firstnode);
	}
}
