#include "monty.h"
/**
 * execute - find the desired opcode and call the related funciton
 * @content: a single line in the monty file
 * @stack: pointer to
 * @counter:
 * @fp:
 *
 */
void execute(char *content, stack_t *stack, unsigned int counter, FILE *fp)
{
    printf("line %d  :- %s", counter, content);
}