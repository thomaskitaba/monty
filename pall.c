#include "monty.h"
/**
 * f_pall - function that prints the stack
 * @head: pointer to head of stack
 * @counter: line_number of command on monty file
 * Return: nothing
*/
void f_pall(stack_t **head, unsigned int counter)
{
	stack_t *h;
	(void)counter;

	h = *head;
	if (h == NULL)
		return;
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
}
