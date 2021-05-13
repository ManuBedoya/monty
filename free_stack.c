#include "monty.h"
/**
 *free_stack - free the stack
 *@stack: double linked list
 */
void free_stack(stack_t *stack)
{
	stack_t *aux;

	if (stack != NULL)
	{
		while (stack != NULL)
		{
			aux = stack;
			stack = stack->next;
			free(aux);
		}
	}
}
