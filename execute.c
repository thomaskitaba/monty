#include "monty.h"
/**
* execute - function that executes function pointers.
* @stack: pointer to a stack
* @counter: line_number of command on monty file
* @file: funcition of command of monty file
* @content: content of the read line - a single line
* Return: nothing
*/
int execute(char *content, stack_t **stack, unsigned int counter, FILE *file)
{
	instruction_t opst[] = {
				{"push", sp_push}, {"pall", sp_pall}, {"pint", sp_pint},
				{"pop", sp_pop},
				{"swap", sp_swap},
				{"add", sp_add},
				{"nop", sp_nop},
				{"sub", sp_sub},
				{"div", sp_div},
				{"mul", sp_mul},
				{"mod", sp_mod},
				{"pchar", sp_pchar},
				{"pstr", sp_pstr},
				{"rotl", sp_rotl},
				{"rotr", sp_rotr},
				{"queue", sp_queue},
				{"stack", sp_stack},
				{NULL, NULL}
				};
	unsigned int i = 0;
	char *op;

	op = strtok(content, " \n\t");
	if (op && op[0] == '#')
		return (0);
	bus.arg = strtok(NULL, " \n\t");
	while (opst[i].opcode && op)
	{
		if (strcmp(op, opst[i].opcode) == 0)
		{	opst[i].f(stack, counter);
			return (0);
		}
		i++;
	}
	if (op && opst[i].opcode == NULL)
	{ fprintf(stderr, "L[%d]", counter);
		fclose(file);
		free(content);
		free_stack(*stack);
		exit(EXIT_FAILURE); }
	return (1);
}
