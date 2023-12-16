#include "lists.h"
/**
 * print_dlistint - Prints all the elements of a dlistint_t list.
 * ointer to the head of the list.
 *
 * Return: Number of nodes in the list.
 **/
size_t print_dlistint(const dlistint_t *h)
{
const dlistint_t *node = h;
size_t node_count = 0;
while (node)
{
printf("%i\n", node->n);
node_count++;
node = node->next;
}
return (node_count);
}
