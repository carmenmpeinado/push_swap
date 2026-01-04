/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_moves1.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: capeinad <capeinad@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/03 17:39:34 by capeinad          #+#    #+#             */
/*   Updated: 2026/01/03 17:39:35 by capeinad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"

static void	reverse_rotate(t_num_list **stack)
{
	t_num_list	*tail;
	t_num_list	*before_tail;

	if (!*stack || !(*stack)->next)
		return ;
	before_tail = *stack;
	while (before_tail->next->next)
		before_tail = before_tail->next;
	tail = before_tail->next;
	before_tail->next = NULL;
	tail->next = *stack;
	*stack = tail;
}

void	rra(t_num_list **stack_a)
{
	reverse_rotate(stack_a);
	write(1, "rra\n", 4);
}

void	rrb(t_num_list **stack_b)
{
	reverse_rotate(stack_b);
	write(1, "rrb\n", 4);
}

void	rrr(t_num_list **stack_a, t_num_list **stack_b)
{
	reverse_rotate(stack_a);
	reverse_rotate(stack_b);
	write(1, "rrr\n", 4);
}
