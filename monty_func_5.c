#include "monty.h"

/**
 * _stack - sets the format of the data to a stack (LIFO)
 * @stack: double pointer to the head of the stack
 * @line_number: line number of the opcode in the file
 */

void _stack(stack_t **stack, unsigned int line_number)
{
	(void)stack;
	(void)line_number;
	var_global.mode = 0; /* 0 means stack mode */
}

/**
 * _queue - sets the format of the data to a queue (FIFO)
 * @stack: double pointer to the head of the stack
 * @line_number: line number of the opcode in the file
 */

void _queue(stack_t **stack, unsigned int line_number)
{
	(void)stack;
	(void)line_number;
	var_global.mode = 1; /* 1 means queue mode */
}

/**
 * get_tail - returns a pointer to the last node of the queue
 * @stack: pointer to the head of the queue
 * Return: pointer to the last node or NULL if empty
 */

stack_t *get_tail(stack_t *stack)
{
	stack_t *tail;

	if (stack == NULL)
		return (NULL);

	tail = stack;
	while (tail->next != NULL)
	{
		tail = tail->next;
	}

	return (tail);
}
