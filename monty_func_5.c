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
