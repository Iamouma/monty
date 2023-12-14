#include "monty.h"
/**
 * main - starting point.
 * @argc: number of arguments passed.
 * @argv: arguments passed.
 * Return: 0 Success else Failure.
 */
int main(int argc, char *argv[])
{
	char *f_name;
	stack_t *s;

	s = create_stack();

	f_name = argv[1];

	if (argc != 2)
	{
		fprint(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	read_file(f_name, &s);

	exit(EXIT_SUCCESS);
}

/**
 * create_stack - creates a new stack.
 * Return: pointer to the new stack.
 */
stack_t *create_stack(void)
{
	stack_t *s = NULL;

	return (s);
}
