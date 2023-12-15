#include "monty.h"
/**
 * main - starting point.
 * @argc: number of arguments passed.
 * @argv: arguments passed.
 * Return: 0 if successful else failure.
 */
int main(int argc, char *argv[])
{
	char *len;
	stack_t *stack;

	stack = create_stack();

	len = argv[1];

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	read_file(len, &stack);

	exit(EXIT_SUCCESS);
}

