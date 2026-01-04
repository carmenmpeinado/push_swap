/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   order.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: capeinad <capeinad@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/03 17:38:52 by capeinad          #+#    #+#             */
/*   Updated: 2026/01/03 20:29:07 by capeinad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	sorted(t_num_list *stack)
{
	while (stack && stack->next)
	{
		if (stack->value > stack->next->value)
			return (0);
		stack = stack->next;
	}
	return (1);
}

int	locate_smallest_value(t_num_list *stack)
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

static int	locate_highest_index(t_num_list *stack)
{
	int	highest;
	int	position;
	int	i;

	highest = stack->index;
	position = 0;
	i = 0;
	while (stack)
	{
		if (stack->index > highest)
		{
			highest = stack->index;
			position = i;
		}
		stack = stack->next;
		i++;
	}
	return (position);
}

static void	move_highest_to_top(t_num_list **stack_b)
{
	int	position;
	int	size;

	position = locate_highest_index(*stack_b);
	size = ft_lstsize(*stack_b);
	if (position <= size / 2)
	{
		while (position-- > 0)
			rb(stack_b);
	}
	else
	{
		while (position++ < size)
			rrb(stack_b);
	}
}

void	ksort(t_num_list **stack_a, t_num_list **stack_b)
{
	int	chunk;
	int	size;
	int	i;

	assign_position(stack_a);
	size = ft_lstsize(*stack_a);
	if (size <= 100)
		chunk = 15;
	else
		chunk = 30;
	i = 0;
	while (*stack_a)
	{
		if ((*stack_a)->index <= i)
			(pb(stack_a, stack_b), rb(stack_b), i++);
		else if ((*stack_a)->index <= i + chunk)
			(pb(stack_a, stack_b), i++);
		else
			ra(stack_a);
	}
	while (*stack_b)
	{
		move_highest_to_top(stack_b);
		pa(stack_a, stack_b);
	}
}
