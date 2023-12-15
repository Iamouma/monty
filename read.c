#include "monty.h"
#include <stdio.h>
/**
 * read_file - opens and reads monty bytecode file
 * @path: path to monty bytecode
 * @stack: pointer pointer stack
 * Return: pointer to read file
 */

void read_file(char *path, stack_t **stack)
{
	size_t len = 0;
	ssize_t tmp;
	char *c = NULL;
	int n = 1;

	FILE *file = fopen(path, "r");

	if (!file)
	{
		fprintf(stderr, "Error: Can't open file %s\n", path);
		exit(EXIT_FAILURE);
	}
	
	while ((tmp = getline(&c, &len, file)) != -1)
	{
		get_tokens(c, stack, ++n);
	}
	free(c);
	fclose(file);
}
