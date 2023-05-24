#include "monty.h"
/**
* sq_push - push to the stack
* @stack: head of the stack
* @counter: line number of the code
* Return: nothing
*/
void sq_push(stack_t **head, unsigned int counter)
{
    int n, j = 0, flag = 0;

	if (bus.arg)
	{
		if (bus.arg[0] == '-')
			j++;
		for (; bus.arg[j] != '\0'; j++)
		{
			if (bus.arg[j] > 57 || bus.arg[j] < 48)
				flag = 1; }
		if (flag == 1)
		{ fprintf(stderr, "L%d: usage: push integer\n", counter);
			fclose(bus.file);
			free(bus.content);
			free_stack(*head);
			exit(EXIT_FAILURE); }}
	else
	{ fprintf(stderr, "L%d: usage: push integer\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE); }
	n = atoi(bus.arg);
	if (bus.lifi == 0)
		add_start(head, n)
	else
		add_start(head, n);
   /* size_t i;

    i = 0;
    if (head == NULL)
    {
        fprintf(stderr, "Invaled argument passed");
        fclose(info.file);
        free(info.content);
        free_stack(*head);
        exit(EXIT_FAILURE);
    }
    if (info.arg)
	{
		if (info.arg[i] == '-')
			i++;
		for (; i < strlen(info.arg); i++)
		{
			if (info.arg[i] < 48 || info.arg[i] > 57)
			{
				fprintf(stderr, "L<%u>: usage: push integer\n", counter);
				free(info.content);
				free_stack(*head);
				fclose(info.file);
				exit(EXIT_FAILURE);
			}
		}
	}
    if (info.ord_type == 0)
        add_start(head, atoi(info.arg));
    else
        add_start(head, atoi(info.arg));*/
}
