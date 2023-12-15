#include "monty.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * mul - multiplies the second toptwo elementsof the stack.
 * @stack: double pointer to the head of the stack.
 * @line_count: number of lines.
 * Return: 0
 */
void mul(stack_t **stack, unsigned int line_count)
{
	int res;

	if (!stack || !*stack || !((*stack)->next))
	{
		fprintf(stderr, "L%d: can't mul, stack too short\n", line_count);
		exit(EXIT_FAILURE);
		return;
	}

	res = ((*stack)->next->n) * ((*stack)->n);
	pop(stack, line_count);
	(*stack)->n = res;
}
