/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   quick_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: capeinad <capeinad@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/03 17:39:22 by capeinad          #+#    #+#             */
/*   Updated: 2026/01/03 17:58:06 by capeinad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	sort_two(t_num_list	**stack_a)
{
	if ((*stack_a)->value > (*stack_a)->next->value)
		sa(stack_a);
}

static void	sort_three(t_num_list	**stack_a)
{
	t_num_list	*first;
	t_num_list	*second;
	t_num_list	*third;

	first = *stack_a;
	second = first->next;
	third = second->next;
	if (first->value > second->value && first->value > third->value)
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

static void	sort_four(t_num_list **stack_a, t_num_list **stack_b)
{
	int	smallest;

	smallest = locate_smallest_value(*stack_a);
	if (smallest <= 1)
	{
		while (smallest-- > 0)
			ra(stack_a);
	}
	else
	{
		while (smallest++ < 4)
			rra(stack_a);
	}
	pb(stack_a, stack_b);
	sort_three(stack_a);
	pa(stack_a, stack_b);
}

static void	sort_five(t_num_list **stack_a, t_num_list **stack_b)
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

void	quick_sort(t_num_list **stack_a, t_num_list **stack_b, int len)
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
