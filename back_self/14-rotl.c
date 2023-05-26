#include "monty.h"
/**
* sq_rotl - rotates the stack to the top
* @stack: head of the stack
* @counter: line number of the code
* Return: nothing
*/
void sq_rotl(__attribute__((unused)) stack_t **stack, __attribute__((unused)) unsigned int counter)
{
	stack_t *current, *Next, *temp;
		temp = current = Next = *stack;
		if (*stack == NULL || current->next == NULL)
		{
			return;
		}
		temp = temp->next;
		temp->prev = NULL;
		while(Next->next)
		{
				Next = Next->next;
		}
		Next->next = current;
		current->next = NULL;
		current->prev = Next;
	   *stack = temp;
}