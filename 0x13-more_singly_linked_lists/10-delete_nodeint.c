#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index
 * of a linked list.
 * @head: head of a list.
 * @index: index of the list where the node is
 * deleted.
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *prevLis;
	listint_t *nextLis;

	prevLis = *head;

	if (index != 0)
	{
		for (i = 0; i < index - 1 && prevLis != NULL; i++)
		{
			prevLis = prevLis->nextLis;
		}
	}

	if (prevLis == NULL || (prevLis->nextLis == NULL && index != 0))
	{
		return (-1);
	}

	nextLis = prevLis->nextLis;

	if (index != 0)
	{
		prevLis->nextLis = nextLis->nextLis;
		free(nextLis);
	}
	else
	{
		free(prevLis);
		*head = nextLis;
	}

	return (1);
}
