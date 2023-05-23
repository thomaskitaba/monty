#include "monty.h"
/**
 * execute - find the desired opcode and call the related funciton
 * @content: a single line in the monty file
 * @stack: pointer to
 * @counter:
 * @fp:
 *
 */
void execute(char *content, stack_t **stack, unsigned int counter, FILE *file)
{
	char *op, *arg;
	unsigned int i, j, flag;

	op = arg = NULL;
	i = j = flag = 0;
	op_optn opcode[] = {{"push", sq_push},
					{"pall", sq_pall},
					{"pint", sq_pint},
					{"pop", sq_pop},
					{"swap", sq_swap},
					{"add", sq_add}};
	/*tokenize content using strtok*/
	op = strtok(content, " \n\t");
	if (strcmp(op, "#") == 0)
	{
		 exit(0);
	}
	info.arg  = strtok(NULL, " \n\t");

	/*check  if argument is number*/



	/* find the appropriate operation code*/
	while (opcode[j].op != NULL && op)
	{
		if (strcmp(op, opcode[j].op) == 0)
		{

			opcode[j].func(stack, counter);
		}
		j++;
	}


	printf("line %d  :- %s\n", counter, content);
}
