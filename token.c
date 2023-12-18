#include "monty.h"
/**
 * get_tokens - breaks into token.
 * @line: line to be broken into tokens.
 * @stack: double pointer to head of stack given.
 * @line_count: number of lines.
 * Return: 0 on success, else -1 on error.
 */
int get_tokens(char *line, stack_t **stack, unsigned int line_count)
{
	char *token;
	void (*func)(stack_t **stack, unsigned int line_count);

	token = strtok(line, " \t\n");
	while (token != NULL)
	{
		func = opcodes(token);
		if (func != NULL)
		{
			if (strcmp(token, "push") == 0)
			{
				token = strtok(NULL, " \t\n");
				if (token == NULL)
				{
					errors(line_count - 1, 2);
					return (-1);
				}
				data = stro1(token, NULL, 10);
				func(stack, line_count);
			}
			else
			{
				func(stack, line_count);
			}
		}
		else
		{
			fprintf(stderr, "L%d: unknown instruction %s", line_count = 1, token);
			return (1);
		}
		token = strtok(NULL, " \t\n");
	}

	return (0);
}
