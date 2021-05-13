#include "monty.h"
/**
 * swap_function - Swaps the top two elements of the stack
 * @stack: Double linked list
 * @line_number: line of the file, where the command was called
 * Return: void
 */
void swap_function(stack_t **stack, unsigned int line_number)
{
	stack_t *aux;

	if (*stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n",
			line_number);
		exit(EXIT_FAILURE);
	}

	aux = *stack;
	while (aux->next->next != NULL)
		aux = aux->next;
	if (aux->prev != NULL)
		aux->prev->next = aux->next;
	aux->next->prev = aux->prev;
	aux->next->next = aux;
	aux->prev = aux->next;
	aux->next = NULL;
}
/**
 * add_function - Adds the top two elements of the stack
 * @stack: Double linked list
 * @line_number: Line of the file, where the command is called
 * Return: void
 */
void add_function(stack_t **stack, unsigned int line_number)
{
	stack_t *aux;

	if (*stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n",
			line_number);
		exit(EXIT_FAILURE);
	}

	aux = *stack;
	while (aux->next->next != NULL)
		aux = aux->next;
	aux->n = aux->n + aux->next->n;

	free(aux->next);
	aux->next = NULL;
}
/**
 * nop_function - Does not do anything
 * @stack: Double linked list
 * @line_number: Line in the file, where the command is called
 * Return: void
 */
void nop_function(stack_t **stack, unsigned int line_number)
{
	(void) stack;
	(void) line_number;
}
