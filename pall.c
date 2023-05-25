#include "monty.h"
/**
* sp_pall - print all the elements of the stack
* @head: head of the stack
* @counter: line number of the code
* Return: nothing
*/
void sp_pall(stack_t **head, unsigned int counter)
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
