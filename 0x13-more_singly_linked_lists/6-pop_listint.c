#include "lists.h"

/**
<<<<<<< HEAD
 * pop_listint - deletes the head node of a linked list
 * @head: head of a linked list.
 *
 * Return: The head of node data.
 */
int pop_listint(listint_t **head)
{
	int znode;
	listint_t *z;
=======
 * pop_listint - deletes the head node of
 * a linked list
 * @head: header file
 *
 * Return: head node's data means success.
 */
int pop_listint(listint_t **head)
{
	int hnode;
	listint_t *h;
>>>>>>> 1ff6b8a0f144350e3764e914da42f5bbd4bc0d44
	listint_t *curr;

	if (*head == NULL)
		return (0);

	curr = *head;

<<<<<<< HEAD
	znode = curr->n;

	z = curr->next;

	free(curr);

	*head = z;

	return (znode);
=======
	hnode = curr->n;

	h = curr->next;

	free(curr);

	*head = h;

	return (hnode);
>>>>>>> 1ff6b8a0f144350e3764e914da42f5bbd4bc0d44
}
