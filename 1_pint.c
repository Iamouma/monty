#include "monty.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * pint - print the value at the top of the stack.
 * @stack: stack given by main.
 * @l_count: number of lines.
 * Return: void.
 */
void pint(stack_t **stack, unsigned int l_count)
{
	if (!stack || !(*stack))
	{
		fprintf(stderr, "L%d: can't pint, stack empty\n", l_count);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*stack)->n);
}
