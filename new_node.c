#include "monty.h"
/**
 * new_node - creates a new node.
 * @i: value of the node.
 * Return: new node.
 */
stack_t *new_node(int i)
{
	stack_t *new = NULL;

	new = malloc(sizeof(stack_t));
	if (new == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}
	new->n = i;
	new->next = NULL;
	new->prev = NULL;

	return (new);
}
