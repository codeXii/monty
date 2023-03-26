#include "monty.h"


/**
 * _mod - find the modulus of the top and next element in a dll
 * @head: head of dll
 * @line_number: line number
 */
void _mod(stack_t **head, unsigned int line_number)
{
	int result;

	if (*head == NULL || (*head)->next == NULL)
	{
		fprintf(stderr, "L%u: can't mod, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	if ((*head)->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", line_number);
		exit(EXIT_FAILURE);
	}
	result = (*head)->n;
	_pop(head, line_number);
	(*head)->n %= result;
}


/**
 * _pchar - prints char at the top dll stack followed by newline
 * @head: head of the dll stack
 * @line_number: line number
 */
void _pchar(stack_t **head, unsigned int line_number)
{
	stack_t *tmp;

	tmp = *head;

	if (tmp == NULL)
	{
		fprintf(stderr, "L%d: can't pchar, stack empty\n", line_number);
		exit(EXIT_FAILURE);
	}
	if (tmp->n > 127 || tmp->n < 0)
	{
		fprintf(stderr, "L%d: can't pchar, value out of range\n", line_number);
		exit(EXIT_FAILURE);
	}
	printf("%c\n", tmp->n);
}


/**
 * _pstr - prints out a string from the top
 * @head: head of stack dll
 * @line_number: line number
 */
void _pstr(stack_t **head, unsigned int line_number)
{
	stack_t *tmp;
	(void)line_number;

	tmp = *head;

	while (tmp)
	{
		if (tmp->n > 127 || tmp-> n <= 0)
		{
			break;
		}
		printf("%c", tmp->n);
		tmp = tmp->next;
	}
	printf("\n");
}


/**
 * _rotl - rotates the stack to the top
 * @head: head of the stack
 * @line_number: line number
 */
void _rotl(stack_t **head, unsigned int line_number)
{
	stack_t *tmp, *temp;

	(void)line_number;
	tmp = *head;

	if (!tmp || !tmp->next)
	{
		return;
	}
	temp = tmp->next;
	temp->prev = NULL;

	while (tmp->next != NULL)
	{
		tmp = tmp->next;
	}
	tmp->next = *head;
	(*head)->next = NULL;
	(*head)->prev = tmp;
	(*head) = temp;

}


/**
 * _rotr - rotates the stack to the bottom
 * @head: had of the stack
 * @line_number: line number
 */
void _rotr(stack_t **head, unsigned int line_number)
{
	stack_t *tmp;
	(void)line_number;

	tmp = *head;

	if (!tmp || !tmp->next)
	{
		return;
	}

	while (tmp->next != NULL)
	{
		tmp = tmp->next;
	}
	tmp->next = *head;
	tmp->prev->next = NULL;
	tmp->prev = NULL;
	(*head)->prev = tmp;
	*head = tmp;
}
