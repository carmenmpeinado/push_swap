/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: capeinad <capeinad@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/03 17:39:14 by capeinad          #+#    #+#             */
/*   Updated: 2026/01/03 17:42:02 by capeinad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft/libft.h"

int		checked_duplicates(char **numbers);
int		is_input_ok(char **argv);
void	free_split(char **args);
char	**normalize_input(char **argv);
int		sorted(t_num_list *stack);
void	rra(t_num_list **stack_a);
void	rrb(t_num_list **stack_b);
void	rrr(t_num_list **stack_a, t_num_list **stack_b);
void	pa(t_num_list **stack_a, t_num_list **stack_b);
void	pb(t_num_list **stack_a, t_num_list **stack_b);
void	ra(t_num_list **stack_a);
void	rb(t_num_list **stack_b);
void	rr(t_num_list **stack_a, t_num_list **stack_b);
void	sa(t_num_list **stack_a);
void	sb(t_num_list **stack_b);
void	ss(t_num_list **stack_a, t_num_list **stack_b);
int		locate_smallest_value(t_num_list *stack);
void	assign_position(t_num_list **stack);
void	quick_sort(t_num_list **stack_a, t_num_list **stack_b, int len);
void	ksort(t_num_list **stack_a, t_num_list **stack_b);
int		push_swap(char **numbers);

#endif
