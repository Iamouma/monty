#include "monty.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * push - push element into stack.
 * @stack: double pointer to head of stack.
 * @line_count: number of lines.
 * Return: 0
 */
void push(stack_t **stack, unsigned int line_count)
{
	stack_t *n =NULL;
	(void)line_count;

	n = createNode(value);

	n->next = *stack;
	if (*stack != NULL)
		(*stack)->prev = n;
	*stack = n;
}

/**
 * pall - prints all the value on the stack.
 * @stack: double pointer to the head of the stack.
 * @line_count: number of lines.
 * Return: 0
 */
void pall(stack_t **stack, unsigned int line_count)
{
	stack_t *len = NULL;
	(void)line_count;

	len = *stack;

	while (len != NULL)
	{
		fprintf(stdout, "%d\n", len->n);
		len = len->next;
	}
}
