#include "monty.h"
/**
 * f_pint - function that prints the top element of a stack
 * @head: pointer to head of stack
 * @counter: line_number of command on monty file
 * Return: nothing
*/
void sp_pint(stack_t **head, unsigned int counter)
{
	if (*head == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*head)->n);
}
