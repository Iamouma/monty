#include "monty.h"
/**
 * opcodes - gives instructions.
 * @opc: code passed.
 * Return: to the function that executes instruction.
 */
void (*opcodes(char *opc))(stack_t **stack, unsigned int line_count)
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
		{"_div", _div},
		{"mul", mul},
		{"mod", mod},
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
