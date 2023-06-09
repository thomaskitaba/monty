#include "monty.h"
/**
 * execute - find the desired opcode and call the related funciton
 * @content: a single line in the monty file
 * @stack: pointer to
 * @counter: line of monty file being executed
 * @file: file pointer
 * Return: 1 on error, on success 0
 */
int execute(char *content, stack_t **head, unsigned int counter, FILE *file)
{
	char *op, *arg;
	unsigned int j, flag;

	op_optn opcode[] = {{"push", sq_push},
					{"pall", sq_pall},
					{"pint", sq_pint},
					{"pop", sq_pop},
					{"swap", sq_swap},
					{"add", sq_add},
                    {"nop", sq_nop},
					{"sub", sq_sub},
					{"div", sq_div},
					{"mul", sq_mul},
					{"mod", sq_mod},
                    {"pchar", sq_pchar},
					{"pstr", sq_pstr},
					{"rotl", sq_rotr},
					{"rotr", sq_swap},
                    {"stack", sq_rotr},
					{"queue", sq_swap},
                    {NULL, NULL}};
    op = arg = NULL;
	j = flag = 0;
	/*tokenize content using strtok*/
	op = strtok(content, " \n\t");
	if (op && op[0] == '#')
		return (0);
	info.arg  = strtok(NULL, " \n\t");
	/*check  if argument is number*/

	/* find the appropriate operation code*/
	while (opcode[j].op && op)
	{
		if (strcmp(op, opcode[j].op) == 0)
		{
			opcode[j].func(head, counter);
			return (0);
		}
		j++;
	}
	if (op && opcode[j].op == NULL)
	{
		fprintf(stderr, "L<%u>: unknown instruction <%s>\n", counter, op);
		free(content);
		free_stack(*head);
		fclose(file);
		exit(EXIT_FAILURE);
	}
	printf("line %u  :- %s\n", counter, content);
	return (1);
}
