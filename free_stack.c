#include "monty.h"
/**
 * free_listint - free node
 * @head: head of node
 * Return: node
 */
void free_stack(stack_t *head)
{
    stack_t *aux;

	aux = head;
	while (head)
	{
		aux = head->next;
		free(head);
		head = aux;
	}
}