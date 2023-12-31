#ifndef MONTY_H
#define MONTY_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <unistd.h>
/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

int data;

stack_t *new_node(int i);
void push(stack_t **stack, unsigned int line_count);
void pall(stack_t **stack, unsigned int line_count);
void pint(stack_t **stack, unsigned int line_count);
void pop(stack_t **stack, unsigned int line_count);
void swap(stack_t **stack, unsigned int line_count);
void add(stack_t **stack, unsigned int line_count);
void nop(stack_t **stack, unsigned int line_count);
void sub(stack_t **stack, unsigned int line_count);
void _div(stack_t **stack, unsigned int line_count);
void mul(stack_t **stack, unsigned int line_counter);
void mod(stack_t **stack, unsigned int line_count);
void pchar(stack_t **stack, unsigned int line_count);
void rot1(stack_t **stack, unsigned int line_count);
void rotr(stack_t **stack, unsigned int line_count);
void errors(unsigned int line_count, int error_number);
void read_file(char *path, stack_t **stack);
stack_t *create_stack(void);
int main(int argc, char *argv[]);
int get_tokens(char *line, stack_t **stack, unsigned int line_count);
void (*opcodes(char *opc))(stack_t **stack, unsigned int line_count);


#endif
