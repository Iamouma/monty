#include "monty.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * pchar - prints the integer at the top of the stack.
 * @stack: double pointer to the head of the stack.'
 * @line_count: number of lines.
 * Return: 0
 */
void pchar(stack_t **stack, unsigned int line_count)
{
	if (!stack || !(*stack))
	{
		fprintf(stderr, "L%d: can't pchar, stack empty\n", line_count);
		exit(EXIT_FAILURE);
		return;
	}
	if (isascii((*stack)->n) == 0)
	{
		fprintf(stderr, "L%d: can't pchar, value out of range\n", line_count);
		exit(EXIT_FAILURE);
		return;
	}
	printf("%c\n", (*stack)->n);
}
