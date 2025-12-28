#include "libft/libft.h"

static void	swap(num_list **stack)
{
	num_list	*first;
	num_list	*second;

	if (!*stack || !(*stack)->next)
		return ;
	first = *stack;
	second = first->next;
	first->next = second->next;
	second->next = first;
	*stack = second;
}

void	sa(num_list **stack_a)
{
	swap(stack_a);
	write(1, "sa\n", 3);
}

void	sb(num_list **stack_b)
{
	swap(stack_b);
	write(1, "sb\n", 3);
}

void	ss(num_list **stack_a, num_list **stack_b)
{
	swap(stack_a);
	swap(stack_b);
	write(1, "ss\n", 3);
}
