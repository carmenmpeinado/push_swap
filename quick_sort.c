#include "push_swap.h"

static void	sort_two(num_list	**stack_a)
{
	if ((*stack_a)->value > (*stack_a)->next->value)
		sa(stack_a);
}

static void	sort_three(num_list	**stack_a)
{
	num_list	*first;
	num_list	*second;
	num_list	*third;

	first = *stack_a;
	second = first->next;
	third = second->next;

	if(first->value > second->value && first->value > third->value)
	{
		ra(stack_a);
		if ((*stack_a)->value > (*stack_a)->next->value)
			sa(stack_a);
	}
	else if (second->value > first->value && second->value > third->value)
	{
		rra(stack_a);
		if ((*stack_a)->value > (*stack_a)->next->value)
			sa(stack_a);
	}
	else
	{
		if (first->value > second-> value)
			sa(stack_a);
	}
}
static void	sort_four(num_list **stack_a, num_list **stack_b)
{
	int	smallest;

	smallest = locate_smallest_value(*stack_a);
	if (smallest <= 1)
	{	while (smallest-- > 0)
			ra(stack_a);
	}
	else
	{	while ((smallest +1) < 4)
			rra(stack_a);
	}
	pb(stack_a, stack_b);
	sort_three(stack_a);
	pa(stack_a, stack_b);
}

static void	sort_five(num_list **stack_a, num_list **stack_b)
{
	int	smallest;

	smallest = locate_smallest_value(*stack_a);
	if (smallest <= 2)
	{
		while (smallest-- > 0)
			ra(stack_a);
	}
	else
	{
		while (smallest++ < 5)
			rra(stack_a);
	}
	pb(stack_a, stack_b);
	sort_four(stack_a, stack_b);
	pa(stack_a, stack_b);
}

void	quick_sort(num_list **stack_a, num_list **stack_b, int len)
{
	if (len == 2)
		sort_two(stack_a);
	else if (len == 3)
		sort_three(stack_a);
	else if (len == 4)
		sort_four(stack_a, stack_b);
	else if (len == 5)
		sort_five(stack_a, stack_b);
}
