#include "push_swap.h"

int	sorted(num_list *stack)
{
	while (stack && stack->next)
	{
		if (stack->value > stack->next->value)
			return (0);
		stack = stack->next;
	}
	return (1);
}

int	locate_smallest_value(num_list *stack)
{
	int	smallest;
	int	position;
	int	i;

	smallest = stack->value;
	position = 0;
	i = 0;
	while (stack)
	{
		if (smallest > stack->value)
		{
			smallest = stack->value;
			position = i;
		}
		stack = stack->next;
		i++;
	}
	return (position);
}

static int	get_max_bits(num_list *stack)
{
	int max_index;
	int max_bits;

	max_index = 0;
	while (stack != NULL)
	{
		if (stack->index > max_index)
			max_index = stack->index;
		stack = stack->next;
	}
	max_bits = 0;
	while ((max_index >> max_bits) != 0)
		max_bits++;

	return (max_bits);
}

void	radix_sort(num_list **stack_a, num_list **stack_b)
{
	int	max_bits;
	int	size;
	int	i;
	int	j;

	assign_position(stack_a);
	size = ft_lstsize(*stack_a);
	max_bits = get_max_bits(*stack_a);
	i = 0;
	while (i < max_bits)
	{
		j = 0;
		while (j < size)
		{
			if ((((*stack_a)->index >> i) & 1) == 0)
				pb(stack_a, stack_b);
			else
				ra(stack_a);
			j++;
		}
		while (*stack_b != NULL)
			pa(stack_a, stack_b);
		i++;
	}
}
