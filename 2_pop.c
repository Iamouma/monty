#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "monty.h"
/**
 * pop - pop the top element of the stack.
 * @stack: stack given.
 * @l_count: line for error messages.
 * Return: void:
 */
void pop(stack_t **stack, unsigned int l_count)
{
	stack_t *s = NULL;

	if (!stack || !*stack)
	{
		fprintf(stderr, "L%u: can't pop an empty stack\n", l_count);
		exit(EXIT_FAILURE);
	}

	s = (*stack)->next;
	free(*stack);
	*stack = s;
	if (!stack)
		return;
	(*stack)->prev = NULL;
}
