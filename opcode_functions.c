#include "monty.h"
/**
 *
 */
void push_function(stack_t **stack, unsigned int line_number)
{
	stack_t  *node = malloc(sizeof(stack_t)), *aux = *stack;
	if (node == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);

	}
        node->prev = NULL;
        node->next = NULL;
        node->n = (int) line_number;
        if (*stack == NULL)
        {
                *stack = node;
		return;
        }
        while (aux->next != NULL)
                aux = aux->next;
        aux->next = node;
        node->prev = aux;

}
/**
 *
 *
 */
void pall_function(stack_t **stack, unsigned int line_number)
{
	(void) line_number;
        stack_t *aux = *stack;

        if (*stack == NULL)
		return;
        while (aux->next != NULL)
                aux = aux->next;
	while (aux != NULL)
	{
		printf("%d\n", aux->n);
		aux = aux->prev;
	}
}
/**
 *
 *
 */
/*void pint_function(stack_t **stack, unsigned int line_number)
{
}
**
 *
 *
 */
/*void pop_function(stack_t **stack, unsigned int line_number)
{
}*/
