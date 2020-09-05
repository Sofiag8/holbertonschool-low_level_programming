#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: a double pointer to the head of the DLL
 * @idx: index of the list where the new node should be added
 * @n: the content of the new node to be added
 * Return: the address of the new node or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node;
	dlistint_t *aux_h;
	unsigned int runner_idx;

	runner_idx = 0;
	if (h == NULL)
		return (NULL);

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);
	new_node->n = n;
	/* case asked idx is 0 or h is null at the beggining, recursion */
	if (idx == 0 || !(*h))
	{
		return (add_dnodeint(h, n));
	}
	/* traverse the list */
	aux_h = *h;
	while (aux_h != NULL && runner_idx != idx - 1)
	{
		runner_idx++;
		aux_h = aux_h->next;
	}
	/* case at the end, recursion */
	if (runner_idx == idx)
	{
		return (add_dnodeint_end(h, n));
	}
	/* idx found then add new_node */
	else /*if (runner_idx == idx - 1 && aux_h != NULL)*/
	{
		new_node->next = aux_h->next;
		aux_h->next->prev = new_node;
		aux_h->next = new_node;
		return (new_node);
	}
	return (NULL);
}
