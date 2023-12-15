#include "monty.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
 * swap - swaps the top two elements in the stack.
 * @stack: double pointer to head of the stack.
 * @line_count: number of lines swapped.
 * Return: 0
 */
void swap(stack_t **stack, unsigned int line_count)
{
	stack_t *s = NULL;
	int len = 0;

	if (!stack || !*stack || !((*stack)->next))
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", line_count);
		exit(EXIT_FAILURE);
	}
	s = *stack;
	len = s->n;
	s->n = len;

	s->n = s->next->n;
	s->next->n = len;
}
