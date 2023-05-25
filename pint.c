#include "monty.h"
/**
* sp_pint - print the top element of the stack
* @head: head of the stack
* @counter: line number of the code
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
