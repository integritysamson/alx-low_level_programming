#include "lists.h"

/**
<<<<<<< HEAD
 * *get_nodeint_at_index -  returns the nth node of a listint_t linked list
 * @head: pointer to the listint_t list
 * @index: index of the node
 * Return: the n node or null if it's not exist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp = head;
	unsigned int i = 0;

	while (temp && i < index)
	{
		temp = temp->next;
		i++;
	}
	return (temp ? temp : NULL);
=======
 * get_nodeint_at_index - returns the nth node of a linked list
 * @head: header file is stored here.
 * @index: index of the node.
 *
 * Return: nth node. If node does not exist, returns NULL.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; i < index && head != NULL; i++)
	{
		head = head->next;
	}

	return (head);
>>>>>>> 1ff6b8a0f144350e3764e914da42f5bbd4bc0d44
}
