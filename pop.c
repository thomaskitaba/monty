#include "monty.h"
/**
 * f_pop - prints the top
 * @head: pointer to head of stack
 * @counter: line_number of command on monty file
 * Return: nothing
*/
void sp_pop(stack_t **head, unsigned int counter)
{
	stack_t *h;

	if (*head == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	*head = h->next;
	free(h);
}
