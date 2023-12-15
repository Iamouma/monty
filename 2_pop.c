#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "monty.h"
/**
 * pop - pop the top element of the stack.
 * @stack: double pointer to head of stack given.
 * @line_count: line for error messages.
 * Return: 0
 */
void pop(stack_t **stack, unsigned int line_count)
{
	stack_t *s = NULL;

	if (!stack || !*stack)
	{
		fprintf(stderr, "L%u: can't pop an empty stack\n", line_count);
		exit(EXIT_FAILURE);
	}

	s = (*stack)->next;
	free(*stack);
	*stack = s;
	if (!stack)
		return;
	(*stack)->prev = NULL;
}
