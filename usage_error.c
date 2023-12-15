#include "monty.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * open_error - open file error message.
 * @file: file.
 * Return: failure.
 */
void open_error(char *file)
{
	fprintf(stderr, "Error: Can't open file %s\n", file);
	exit(EXIT_FAILURE);
}

/**
 * usage_error - prints an usage error message'
 * Return: Failure.
 */
void usage_error(void)
{
	fprintf(stderr, "USAGE: monty file\n");
	exit(EXIT_FAILURE);
}
