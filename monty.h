#ifndef MONTY_H
#define MONTY_H
#define _POSIX_C_SOURCE 200809L
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <ctype.h>

/**
 * stack_s - double linked list
 * @n: value in list
 * @next: pointer to next node
 * @prev: pointer to previous node
 * Desription: structure that defines stack or queue
 */
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;

/**
 * struct instruction_t - contains command and related function
 * @opcode: operation code
 * @f: function pointer to monty opcodes
 * Description: holds opcode name and its related funtion
 */
typedef struct instruction_t
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int counter);
} instruction_t;
/**
 * bus_s - holdes info necessory for monty opcode interpreter
 * @content: command on specific line of monty file
 * @arg: argument part of monty opecode
 * @fp: pointer to a monty file
 * @lifi: change order of linked list between stack and queue
 */
typedef struct bus_s
{
	char *arg;
	FILE *file;
	char *content;
	int lifi;
}  bus_t;
extern bus_t bus;

void sp_push(stack_t **head, unsigned int number);
void sp_pall(stack_t **head, unsigned int number);
void sp_pint(stack_t **head, unsigned int number);
int execute(char *content, stack_t **head, unsigned int counter, FILE *file);
void free_stack(stack_t *head);
void sp_rotr(stack_t **head, __attribute__((unused)) unsigned int counter);
void addnode(stack_t **head, int n);
void addqueue(stack_t **head, int n);
void sp_queue(stack_t **head, unsigned int counter);
void sp_stack(stack_t **head, unsigned int counter);
void sp_pop(stack_t **head, unsigned int counter);
void sp_swap(stack_t **head, unsigned int counter);
void sp_add(stack_t **head, unsigned int counter);
void sp_nop(stack_t **head, unsigned int counter);
void sp_sub(stack_t **head, unsigned int counter);
void sp_div(stack_t **head, unsigned int counter);
void sp_mul(stack_t **head, unsigned int counter);
void sp_mod(stack_t **head, unsigned int counter);
void sp_pchar(stack_t **head, unsigned int counter);
void sp_pstr(stack_t **head, unsigned int counter);
void sp_rotl(stack_t **head, unsigned int counter);

#endif
