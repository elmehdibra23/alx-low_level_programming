#include "lists.h"
/**
* free_listint2 - Frees a linked list of type listint_t.
* @head: Pointer to the head node of the linked list.
*
* Return: void.
*/
void free_listint2(listint_t **head)
{
listint_t *current;
if (head == NULL)
return;
while (*head != NULL)
{
current = *head;
*head = (*head)->next;
free(current);
}
/* Set head to NULL after freeing all nodes */
*head = NULL;
}
