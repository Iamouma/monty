#include "monty.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * add - adds the first two nodes of the stack.
 * @stack: double pointer to head of the stack.
 * @line_count: line counter.
 * Return: 0
 */
void add(stack_t **stack, unsigned int line_count)
{
	int result;

	if (!stack || !*stack || !((*stack)->next))
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", line_count);
		exit(EXIT_FAILURE);
	}

	result = ((*stack)->next->n) + ((*stack)->n);
	pop(stack, line_count);
	(*stack)->n = result;
}
