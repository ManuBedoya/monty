#include "monty.h"
/**
 *sub_function - sub 2 numbers
 *@stack: list
 *@line_number: line number
 */
void sub_function(stack_t **stack, unsigned int line_number)
{
	stack_t *aux;

	if (*stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n",
			line_number);
		exit(EXIT_FAILURE);
	}

	aux = *stack;
	while (aux->next->next != NULL)
		aux = aux->next;
	aux->n = aux->n - aux->next->n;

	free(aux->next);
	aux->next = NULL;
}
/**
 *div_function - div 2 numbers
 *@stack: list
 *@line_number: line number
 */
void div_function(stack_t **stack, unsigned int line_number)
{
	stack_t *aux;

	if (*stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%d: can't div, stack too short\n",
			line_number);
		exit(EXIT_FAILURE);
	}

	aux = *stack;
	while (aux->next->next != NULL)
		aux = aux->next;
	if (aux->next->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", line_number);
		exit(EXIT_FAILURE);
	}
	else
		aux->n = aux->n / aux->next->n;

	free(aux->next);
	aux->next = NULL;
}
/**
 *mul_function - mul 2 numbers
 *@stack: list
 *@line_number: line number
 */
void mul_function(stack_t **stack, unsigned int line_number)
{
	stack_t *aux;

	if (*stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%d: can't mul, stack too short\n",
			line_number);
		exit(EXIT_FAILURE);
	}

	aux = *stack;
	while (aux->next->next != NULL)
		aux = aux->next;
	aux->n = aux->n * aux->next->n;

	free(aux->next);
	aux->next = NULL;
}
/**
 *mod_function - mod 2 numbers
 *@stack: list
 *@line_number: line number
 */
void mod_function(stack_t **stack, unsigned int line_number)
{
	stack_t *aux;

	if (*stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%d: can't mod, stack too short\n",
			line_number);
		exit(EXIT_FAILURE);
	}

	aux = *stack;
	while (aux->next->next != NULL)
		aux = aux->next;
	if (aux->next->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", line_number);
		exit(EXIT_FAILURE);
	}
	else
		aux->n = aux->n % aux->next->n;

	free(aux->next);
	aux->next = NULL;
}
/**
 *pchar_function - print a character
 *@stack: list
 *@line_number: line number
 */
void pchar_function(stack_t **stack, unsigned int line_number)
{
	stack_t *aux;

	if (*stack == NULL)
	{
		fprintf(stderr, "L%d: can't pchar, stack empty\n", line_number);
		exit(EXIT_FAILURE);
	}

	aux = *stack;
	while (aux->next != NULL)
		aux = aux->next;
	fprintf(stdout, "%c\n", aux->n);
}
