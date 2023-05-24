#include "monty.h"
/**
* sq_push - push to the stack
* @stack: head of the stack
* @counter: line number of the code
* Return: nothing
*/
void sq_push(stack_t **head, unsigned int counter)
{
    stack_t *current;
    current = *head;
    printf("sq_push funciton goes here\n");
    if (stack == NULL)
    {
        fprintf(stderr, "Invaled argument passed");
        fclose(info.file);
        free(info.content);
        free_stack(*head);
        exit(EXIT_FAILURE);
    }
    if (info.ord_type == 0)
        add_start(head, atoi(info.arg));
    else
        add_start(head, atoi(info.arg));
}
