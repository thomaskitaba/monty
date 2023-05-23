#include "monty.h"
/**
 * execute - find the desired opcode and call the related funciton
 * @content: a single line in the monty file
 * @stack: pointer to
 * @counter:
 * @fp:
 *
 */
void execute(char *content, stack_t **stack, unsigned int counter, FILE *fp)
{
	op_optn opcodes[] = {{"push", sq_push},
					{"pall", sq_pall},
					{"pint", sq_pint},
					{"pop", sq_pop},
					{"swap", sq_swap},
					{"add", sq_add}};
	printf("line %d  :- %s", counter, content);
}