#include "monty.h"
/**
 * read_file - opens and reads monty bytecode.
 * @path: path to monty bytecode.
 * @stack: double pointer to stack.
 * Return: pointer to read file.
 */
void read_file(char *path, stack_t **stack)
{
	size_t count = 0;
	ssize_t len;
	char *c = NULL;
	int n = 1;

	FILE *file = fopen(path, "r");

	if (!file)
	{
		fprintf(stderr, "Error: Can't open file %s\n", path);
		exit(EXIT_FAILURE);
	}

	while ((len = getline(&c, &count, file)) != -1)
	{
		get_tokens(c, stack, ++n);
	}
	free(c);
	fclose(file);
}
