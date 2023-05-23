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
	token = NULL;
	unsigned int i;
	op_optn opcodes[] = {{"push", sq_push},
					{"pall", sq_pall},
					{"pint", sq_pint},
					{"pop", sq_pop},
					{"swap", sq_swap},
					{"add", sq_add}};
	/*tokenize content using strtok*/
	op = strtok(content, " \n\t");
	if (strcmp(op, "#") == 0)
	{
		return (0);
	}
	arg = strtok(NULL, " \n\t");
	/*check arg*/
	if (strcmp(arg), "-")
	{
		fprintf(stderr, "Error: invalid argument");
		free(content);
		free(stack);
		fclose(file);
		exit(EXIT_FAILUR);
	}
	/*check  if argument is number*/
	for (i = 0; i < strlen(arg); i++)
	{
		if (arg[i] < 48 || arg[i] > 57)
		{
			fprintf(stderr, "Error: Invalid argument type");
			free(content);
			free(stack);
			fclose(file);
			exit(EXIT_FAILUR);
		}
	}
	info.arg = atoi(arg);
	/* find the appropriate operation code*/

	printf("line %d  :- %s", counter, content);
}
