#include "libft/libft.h"

static void	reverse_rotate(num_list **stack)
{
	num_list *tail;
	num_list *before_tail;

	if (!*stack || !(*stack)->next)
		return ;
	tail = *stack;
	tail->index = ft_lstsize(*stack);
	before_tail = *stack;
	while (before_tail->next != tail)
		before_tail = before_tail->next;
	before_tail->next = NULL;
	tail->next = *stack;
	*stack = tail;
}

void	rra(num_list **stack_a)
{
	reverse_rotate(stack_a);
	write(1, "rra\n", 4);
}

void	rrb(num_list **stack_b)
{
	reverse_rotate(stack_b);
	write(1, "rrb\n", 4);
}

void	rrr(num_list **stack_a, num_list **stack_b)
{
	reverse_rotate(stack_a);
	reverse_rotate(stack_b);
	write(1, "rrr\n", 4);
}
