#include "monty.h"
#include <stdio.h>
#include <stdlib.h>
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
	char *line = NULL;
	int n = 1;

	FILE *file = fopen(path, "r");

	if (!file)
	{
		fprintf(stderr, "Error: Can't open file %s\n", path);
		exit(EXIT_FAILURE);
	}
	
	
	free(line);
	fclose(file);
}
