#include "monty.h"
/**
* add_start - add node at the end of d_list
* @head: head of the doublec
* @n: number to be inserted
* Return: inserted node address, or NUll
*/
void *add_start(stack_t **head, int n)
{
stack_t *list;
list = NULL;
stack = *head;
list = (stack_t *)malloc(sizeof(stack_t));

if (list == NULL)
{
	fprintf(stderr, "Error: malloc failed\n");
	fclose(info.file);
	free(info.content);
	free_stack(*head);
	exit(EXIT_FAILURE);
}
	list->n = n;
	list->prev = NULL;
	list->next = *head;
if (*head != NULL)
{
	(*head)->prev = list;
}
stack = list;
}
/**
* add_end - add node at the end of d_list
* @head: head of the doublec
* @n: number to be inserted
* Return: inserted node address, or NUll
*/
/*
stack_t *add_end(stack_t **head, int n)
{
stack_t *current, *Next, *list;
current = Next = *head;
list = NULL;

list = (stack_t *)malloc(sizeof(stack_t));
if (list == NULL)
{
	fprintf(stderr, "Error: malloc failed\n");
	fclose(info.file);
	free(info.content);
	free_stack(*head);
	exit(EXIT_FAILURE);
}
list->n = n;
if (*head == NULL)
{
	list->prev = NULL;
	list->next = NULL;
	*head = list;
	return (*head);
}
while (Next)
{
	current = Next;
	Next = Next->next;
}
	current->next = list;
	list->prev = current;
	list->next = NULL;
	return (*head);
}
*/

/**
* pop_start - delete the top node at the begning
* @head: head of the double linked list
* @n: number to be inserted to the list
* Return: head of the node, or Null
*/
void *pop_start(stack_t **head, unsigned int n)
{
	stack_t *current;
	current = *head;
	stack = current->next;
	stack->prev = NULL;
	free(current);
}
/**
* pop_end - delete last node at the end of d_list
* @head: head of the doublec
* @n: number to be inserted
* Return: inserted node address, or NUll
*/
void *pop_end(stack_t **head, unsigned int n)
{
	return (*head);
}
