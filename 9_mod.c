#include "monty.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * mod - computes the rest of the division of the remainder.
 * @stack: double pointer to the head of the stack.
 * @line_count: number of lines.
 * Return: 0
 */
void mod(stack_t **stack, unsigned int line_count)
{
	int res;

	if (!stack || !*stack || !((*stack)->next))
	{
		fprintf(stderr, "L%d: can't mod, stack too short\n", line_count);
		exit(EXIT_FAILURE);
		return;
	}
	if (((*stack)->n) == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", line_count);
		exit(EXIT_FAILURE);
		return;
	}

	res = ((*stack)->next->n) % ((*stack)->n);
	pop(stack, line_count);
	(*stack)->n = res;
}
