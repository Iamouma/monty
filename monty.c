#include "monty.h"
/**
 * main - starting point.
 * @argc: number of arguments passed.
 * @argv: arguments passed.
 * Return: 0 if successful else failure.
 */
int main(int argc, char **argv)
{
	if (argc != 2)
	{
		usage_error();
	}
	else
	{
		execute(argv[1]);
	}

	exit(EXIT_SUCCESS);
}
