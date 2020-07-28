#include "lists.h"
listint_t *getnode(int n);
/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: double pointer to the head of the listint list
 * @idx: is the index of the list where the new node should be added
 * @n: is the data
 * Return: Null if it failed or the address of the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *headaux;
	unsigned int size;

	size = 0;

	if (!idx)
	{
		return (NULL);
	}
	else
	{
		while (idx--)
		{
			if (idx == 0)
			{
				headaux = getnode(n);
				headaux->next = *head;
				*head = headaux;
			}
			head = &(*head)->next;
		}
		size++;
	}
	return (headaux);
}
/**
 * getnode - function to create and return a node
 * @n: is the data
 * Return: a pointer listint_t type
 */
listint_t *getnode(int n)
{
	listint_t *addrnewnode;

	addrnewnode = malloc(sizeof(listint_t));
	addrnewnode->n = n;
	addrnewnode->next = NULL;
	return (addrnewnode);
}
