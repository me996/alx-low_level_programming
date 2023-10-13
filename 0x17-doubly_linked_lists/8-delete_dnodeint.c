#include "lists.h"

/**
 * delete_dnodeint_at_index - Delete a node from a dlistint_t at a given index.
 * @head: A pointer to the head of the dlistint_t.
 * @index: The index of the node to delete.
 *
 * Return: On success, return 1. On failure, return -1.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
dlistint_t *tmp = *head;
if (*head == NULL)
return (-1);
if (index == 0)
{
*head = tmp->next;
if (*head != NULL)
(*head)->prev = NULL;
free(tmp);
return (1);
}
for (; index != 0 && tmp != NULL; index--)
tmp = tmp->next;
if (tmp == NULL)
return (-1);
tmp->prev->next = tmp->next;
if (tmp->next != NULL)
tmp->next->prev = tmp->prev;
free(tmp);
return (1);
}
