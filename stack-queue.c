#include "monty.h"

/**
 * _stack - set format to LIFO
 * @head: head of the stack
 * @line_number: line number
 */
void _stack(stack_t **head, unsigned int line_number)
{
	(void)head;
	(void)line_number;
	buf.flag = 0;
}



/**
 * _queue - set format to FIFO
 * @head: head of the stack
 * @line_number: line number
 */
void _queue(stack_t **head, unsigned int line_number)
{
	(void)head;
	(void)line_number;
	buf.flag = 1;
}
