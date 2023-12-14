#include "monty.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
 * swap - swaps number from top to previous.
 * @stack: stack given.
 * @l_count: number of lines swapped.
 * Return: void.
 */
void swap(stack_t **stack, unsigned int l_count)
{
	stack_t *s = NULL;
	int len = 0;

	if (!stack || !*stack || !((*stack)->next))
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", l_count);
		exit(EXIT_FAILURE);
	}
	s = *stack;
	len = s->n;
	s->n = len;

	s->n = s->next->n;
	s->next->n = len;
}
