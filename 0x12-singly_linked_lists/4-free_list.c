#include "lists.h"
/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: pointer to the head of the list
 * Return: a poitner to the new node or NULL if it failed
 */
void free_list(list_t *head)
{
	list_t *firstnode;

	while (head != NULL)
	{
		firstnode = head;
		head = head->next;
		free(firstnode);
	}
}
