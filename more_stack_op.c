#include "monty.h"


/**
 * _add - adds the top number and the next number in stacked dll
 * @head: head of am stack dll
 * @line_number: line number
 */
void _add(stack_t **head, unsigned int line_number)
{
	stack_t *tmp;
	int len;
	int sum;

	tmp = *head;
	/*if (tmp == NULL)
	{
		fprintf(stderr, "L%d: can't add, stack too short", line_number);
		exit(EXIT_FAILURE);
	}*/
	for (len = 0; tmp != NULL; len++)
		tmp = tmp->next;
	if (head == NULL || (*head)->next == NULL || len < 2)
	{
		fprintf(stderr, "L%d: can't add, stack too short", line_number);
		exit(EXIT_FAILURE);
	}
	tmp = *head;
	sum = (*head)->next->n + (*head)->n;
	_pop(head, line_number);
	(*head)->n = sum;

}



/**
 * _nop - does nothing on the satck
 * @head: the head of the stack
 * @line_number: line number
 */
void _nop(__attribute__((unused))stack_t **head, __attribute__((unused)) unsigned int line_number)
{
	;
}


/**
 * _sub - subtracts the top element from the nxt element in a dll
 * @head: head of a dll
 * @line_number: line number
 */
void _sub(stack_t **head, unsigned int line_number)
{
	stack_t *tmp;
	int result, count;

	tmp = *head;
	for (count = 0; tmp != NULL; count++)
		tmp = tmp->next;
	if (count < 2)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	tmp = *head;
	result = tmp->next->n - tmp->n;
	tmp->next->n = result;
	(*head) = tmp->next;
	free(tmp);
}


/**
 * _div - divides the next element by the top element in dll
 * @head: head of dll
 * @line_number: line number
 */
void _div(stack_t **head, unsigned int line_number)
{
	int result;

	if (*head == NULL || (*head)->next == NULL)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", line_number);
		fclose(buf.file);
		free(buf.command);
		free_dlist(*head);
		exit(EXIT_FAILURE);
	}

	if ((*head)->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", line_number);
		fclose(buf.file);
		free(buf.command);
		free_dlist(*head);
		exit(EXIT_FAILURE);
	}
	result = (*head)->n;
	_pop(head, line_number);
	(*head)->n /= result;

}



/**
 * _mul - multiplies the top and the next numbers in dll
 * @head: head of a dll
 * @line_number: line number in the file
 */
void _mul(stack_t **head, unsigned int line_number)
{
	int tmp;

	if ((*head) == NULL || (*head)->next == NULL)
	{
		fprintf(stderr, "L%d: can't mul, stack too short\n", line_number);
		fclose(buf.file);
		free(buf.command);
		free_dlist(*head);
		exit(EXIT_FAILURE);
	}
	tmp = (*head)->n;
	_pop(head, line_number);
	(*head)->n *= tmp;

}
#include "monty.h"


/**
 * _add - adds the top number and the next number in stacked dll
 * @head: head of am stack dll
 * @line_number: line number
 */
void _add(stack_t **head, unsigned int line_number)
{
	stack_t *tmp;
	int len;
	int sum;

	tmp = *head;
	/*if (tmp == NULL)
	{
		fprintf(stderr, "L%d: can't add, stack too short", line_number);
		exit(EXIT_FAILURE);
	}*/
	for (len = 0; tmp != NULL; len++)
		tmp = tmp->next;
	if (head == NULL || (*head)->next == NULL || len < 2)
	{
		fprintf(stderr, "L%d: can't add, stack too short", line_number);
		exit(EXIT_FAILURE);
	}
	tmp = *head;
	sum = (*head)->next->n + (*head)->n;
	_pop(head, line_number);
	(*head)->n = sum;

}



/**
 * _nop - does nothing on the satck
 * @head: the head of the stack
 * @line_number: line number
 */
void _nop(__attribute__((unused))stack_t **head, __attribute__((unused)) unsigned int line_number)
{
	;
}


/**
 * _sub - subtracts the top element from the nxt element in a dll
 * @head: head of a dll
 * @line_number: line number
 */
void _sub(stack_t **head, unsigned int line_number)
{
	stack_t *tmp;
	int result, count;

	tmp = *head;
	for (count = 0; tmp != NULL; count++)
		tmp = tmp->next;
	if (count < 2)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	tmp = *head;
	result = tmp->next->n - tmp->n;
	tmp->next->n = result;
	(*head) = tmp->next;
	free(tmp);
}


/**
 * _div - divides the next element by the top element in dll
 * @head: head of dll
 * @line_number: line number
 */
void _div(stack_t **head, unsigned int line_number)
{
	int result;

	if (*head == NULL || (*head)->next == NULL)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", line_number);
		fclose(buf.file);
		free(buf.command);
		free_dlist(*head);
		exit(EXIT_FAILURE);
	}

	if ((*head)->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", line_number);
		fclose(buf.file);
		free(buf.command);
		free_dlist(*head);
		exit(EXIT_FAILURE);
	}
	result = (*head)->n;
	_pop(head, line_number);
	(*head)->n /= result;

}



/**
 * _mul - multiplies the top and the next numbers in dll
 * @head: head of a dll
 * @line_number: line number in the file
 */
void _mul(stack_t **head, unsigned int line_number)
{
	int tmp;

	if ((*head) == NULL || (*head)->next == NULL)
	{
		fprintf(stderr, "L%d: can't mul, stack too short\n", line_number);
		fclose(buf.file);
		free(buf.command);
		free_dlist(*head);
		exit(EXIT_FAILURE);
	}
	tmp = (*head)->n;
	_pop(head, line_number);
	(*head)->n *= tmp;

}
