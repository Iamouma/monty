#include "monty.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * add - adds the first two nodes of the stack.
 * @stack: stack given.
 * @l_count: line counter.
 * Return: 0
 */
void add(stack_t **stack, unsigned int l_count)
{
	int result;

	if (!stack || !*stack || !((*stack)->next))
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", l_count);
		exit(EXIT_FAILURE);
	}

	result = ((*stack)->next->n) + ((*stack)->n);
	pop(stack, l_count);
	(*stack)->n = result;
}
