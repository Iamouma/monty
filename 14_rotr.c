#include "monty.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * rotr - rotates the last node of the stack.
 * @stack: double pointer tothe head of the stack.
 * @line_count: number of lines.
 * Return: 0
 */
void rotr(stack_t **stack, unsigned int line_count)
{
	stack_t *len;
	stack_t *temp;

	(void) line_count;
	if (!stack || !*stack || !(*stack)->next)
		return;

	len = *stack;

	while (len->next)
		len = len->next;

	temp = len->prev;
	len->next = *stack;
	len->prev = NULL;
	temp->next = NULL;
	(*stack)->prev = len;
	*stack = len;
}
