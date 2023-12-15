#include "monty.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * pint - print the value at the top of the stack.
 * @stack: double pointer to head of the stack.
 * @line_count: number of lines.
 * Return: 0
 */
void pint(stack_t **stack, unsigned int line_count)
{
	if (!stack || !(*stack))
	{
		fprintf(stderr, "L%d: can't pint, stack empty\n", line_count);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*stack)->n);
}
