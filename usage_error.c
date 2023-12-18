#include "monty.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * errors- handles errors.
 * @line_count: number of lines.
 * @error_number: number with the error.
 * Return: 0
 */
void errors(unsigned int line_count, int error_number)
{
	if (error_number == 1)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", line_count);
	}
	else if (error_number == 2)
	{
		fprintf(stderr, "L%d: usage: push integer\n", line_count);
	}
	else if (error_number == 3)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", line_count);
	}
	else if (error_number == 4)
	{
		fprintf(stderr, "L%d: can't pint, stack empty\n", line_count);
	}
	else if (error_number == 5)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", line_count);
	}
	else if (error_number == 6)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", line_count);
	}
	exit(EXIT_FAILURE);
}
