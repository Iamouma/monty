#include "monty.h"
/**
 * opcodes - gives instruction to follow.
 * @stack: double pointer to head of the stack.
 * @opc: instructions passed.
 * @line_count: number of lines.
 */
void opcodes(stack_t **stack, char *opc, unsigned int line_count)
{
	instruction_t instruct[] = {
		{"pall", pall},
		{"push", push},
		{"pint", pint},
		{"pop", pop},
		{"swap", swap},
		{"nop", nop},
		{"add", add},
		{"sub", sub},
		{"div", div},
		{"mul", mul},
		{"mod", mod},
		{"pchar", pchar},
		{"rot1", rot1},
		{"rotr", rotr},
		{NULL, NULL}};

	int i;

	for (i = 0; instruct[i].opcode; i++)
	{
		if (strcmp(instruct[i].opcode, opc) == 0)
		{
			return (instruct[i].f);
		}
	}

	return (NULL);
}
