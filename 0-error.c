#include "monty.h"
#include <stdio.h>
#include <stdlib.h>
/*
 * errors - deals with errors from the program.
 * @line_n: number of lines in opcode file.
 * @err_n: numberpasses rep error type.
 * Return: void
 */
void errors(unsigned int line_n, int err_n)
{
	if (err_n == 1)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", line_n);
	}
	else if (err_n == 2)
	{
		fprintf(stderr, "L%d: usage: push integer\n",  line_n);
	}
	else if (err_n == 3)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n",  line_n);
	}
	else if (err_n == 4)
	{
		fprintf(stderr, "L%d: can't pint, stack empty\n",  line_n);
	}
	else if (err_n == 5)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n",  line_n);
	}
	else if (err_n == 6)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n",  line_n);
	}
	exit(EXIT_FAILURE);
}

