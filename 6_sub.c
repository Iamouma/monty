#include "monty.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
 * sub - substracts the top two elements of the stack.
 * @stack: double pointer to the head of the stack.
 * @line_count: number of lines.
 * Return: 0
 */
void sub(stack_t **stack, unsigned int line count)
{
	int res;

	if (!stack || !*stack || !((*stack)->next))
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", line_count);
		exit(EXIT_FAILURE);
	}

	res = ((*stack)->next->n) - ((*stack)->n);
	pop(stack, line_count);
	(*stack)->n = res;
}
