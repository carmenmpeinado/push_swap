#include "libft/libft.h"

static void	rotate(num_list **stack)
{
	num_list	*first;
	num_list	*last;

	if(!(*stack)->next || !*stack)
		return ;
	first = *stack;
	last = ft_lstlast(*stack);
	*stack = first->next;
	first->next = NULL;
	last->next = first;
}

void	ra(num_list **stack_a)
{
	rotate(stack_a);
	write(1, "ra\n", 3);
}

void	rb(num_list **stack_b)
{
	rotate(stack_b);
	write(1, "rb\n", 3);
}

void	rr(num_list **stack_a, num_list **stack_b)
{
	rotate(stack_a);
	rotate(stack_b);
	write(1, "rr\n", 3);
}
