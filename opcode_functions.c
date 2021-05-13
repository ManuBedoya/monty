#include "monty.h"
/**
 * push_function - Pushes an element to the stack
 * @stack: Double linked list
 * @line_number: Line in the file, where the command is called
 * Return: void
 */
void push_function(stack_t **stack, unsigned int line_number)
{
	stack_t  *node = malloc(sizeof(stack_t)), *aux = *stack;

	if (node == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}

	if (!vars.tokens[1])
	{
		free(node);
		free_stack(*stack);
		free(vars.buffer);
		free(vars.tokens);
		fprintf(stderr, "L%d: usage: push integer\n", line_number);
		exit(EXIT_FAILURE);
	}
	node->prev = NULL;
	node->next = NULL;
	node->n = vars.number;

	if (*stack == NULL)
	{
		*stack = node;
		vars.number = 0;
		return;
	}

	while (aux->next != NULL)
		aux = aux->next;
	aux->next = node;
	node->prev = aux;
	vars.number = 0;
}

/**
 * pall_function - Prints all values on the stack, starting from the top
 * @stack: Double linked list
 * @line_number: void argument
 * Return: void
 */
void pall_function(stack_t **stack, unsigned int line_number)
{
	stack_t *aux;

	(void) line_number;

	if (*stack == NULL)
		return;

	aux = *stack;
	while (aux->next != NULL)
		aux = aux->next;
	while (aux != NULL)
	{
		fprintf(stdout, "%d\n", aux->n);
		aux = aux->prev;
	}
}

/**
 * pint_function - Print the value at the top of the stack,
 * followed by a new line
 * @stack: Double linked list.
 * @line_number: Line of the file, where the command is called
 * Return: void.
 */
void pint_function(stack_t **stack, unsigned int line_number)
{
	stack_t *aux;

	if (*stack == NULL)
	{
		fprintf(stderr, "L%d: can't pint, stack empty\n", line_number);
		exit(EXIT_FAILURE);
	}

	aux = *stack;
	while (aux->next != NULL)
		aux = aux->next;
	fprintf(stdout, "%d\n", aux->n);
}
/**
 * pop_function - Removes the top element of the stack
 * @stack: Double linked list
 * @line_number: Line of the file, where the command is called
 * Return: void.
 */
void pop_function(stack_t **stack, unsigned int line_number)
{
	stack_t *aux;

	if (*stack == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", line_number);
		exit(EXIT_FAILURE);
	}

	if ((*stack)->next == NULL)
	{
		free(*stack);
		*stack = NULL;
		return;
	}

	aux = *stack;
	while (aux->next->next != NULL)
		aux = aux->next;
	free(aux->next);
	aux->next = NULL;
}
