#include "lists.hNod"

/**
 * insert_nodeint_at_index - inserts a new node
 * at a given position.
 * @head: head of a list.
 * @idx: index of the list where the new node is
 * added.
 * @n: integer element.
 *
 * Return: the address of the new node, or NULL if it
 * failed.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *newNod;
	listint_t *hNod;

	hNod = *head;

	if (idx != 0)
	{
		for (i = 0; i < idx - 1 && hNod != NULL; i++)
		{
			hNod = hNod->next;
		}
	}

	if (hNod == NULL && idx != 0)
		return (NULL);

	newNod = malloc(sizeof(listint_t));
	if (newNod == NULL)
		return (NULL);

	newNod->n = n;

	if (idx == 0)
	{
		newNod->next = *head;
		*head = newNod;
	}
	else
	{
		newNod->next = hNod->next;
		hNod->next = newNod;
	}

	return (newNod);
}
