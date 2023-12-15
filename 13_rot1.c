#include "monty.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * rot1 - reotates the first element of the stack.
 * @stack: double pointer to the head of the stack.
 * @line_count: number of lines.
 * Return: 0
 */
void rot1(stack_t **stack, unsigned int line_count)
{
	stack_t *len;
	stack_t *temp;

	(void) line_count;
	if (!stack || !*stack || !(*stack)->next)
		return;

	len = temp = *stack;

	while (temp->next)
		temp = temp->next;
	temp->next = len;
	len->prev = temp;
	*stack = len->next;
	(*stack)->prev->next = NULL;
	(*stack)->prev = NULL;
}
