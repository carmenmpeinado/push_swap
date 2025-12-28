#include "libft/libft.h"

void	pa(num_list **stack_a, num_list **stack_b)
{
	num_list	*tmp;

	if (!*stack_b)
		return ;
	tmp = *stack_b;
	*stack_b = (*stack_b)->next;
	tmp->next = *stack_a;
	*stack_a = tmp;
	write(1, "pa\n", 3);
}

void	pb(num_list **stack_a, num_list **stack_b)
{
	num_list	*tmp;

	if(!*stack_a)
		return ;
	tmp = *stack_a;
	*stack_a = (*stack_a)->next;
	tmp->next = *stack_b;
	*stack_b = tmp;
	write(1, "pb\n", 3);
}


