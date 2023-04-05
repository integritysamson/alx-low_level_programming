#include "lists.h"

/**
 * free_listint - frees a linked list
 * @head: header file goes here
 *
 * Return: no return defined code accuracy.
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while ((temp = head) != NULL)
	{
		head = head->next;
		free(temp);
	}
}
