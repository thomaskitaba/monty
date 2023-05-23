#include "monty.h"
/**
* add_dnodeint - add node at the begning
* @head: head of the double linked list
* @n: number to be inserted to the list
* Return: head of the node, or Null
*/
stack_t *add_stack_start(stack_t **head, int n)
{
stack_t *list;
list = NULL;
if (head == NULL)
return (NULL);
list = (stack_t *)malloc(sizeof(stack_t));

if (list == NULL)
{
	fprintf(stderr, "Error: malloc failed\n");
	exit(EXIT_FAILURE);
}

list->n = n;
list->prev = NULL;
list->next = *head;
if (*head != NULL)
{
(*head)->prev = list;
}
*head = list;
return (*head);
}
