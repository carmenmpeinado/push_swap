#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft/libft.h"

int		checked_duplicates(char **numbers);
int		is_input_ok(char **argv);
void	free_split(char **args);
char	**normalize_input(char **argv);
int		sorted(num_list *stack);
void	rra(num_list **stack_a);
void	rrb(num_list **stack_b);
void	rrr(num_list **stack_a, num_list **stack_b);
void	pa(num_list **stack_a, num_list **stack_b);
void	pb(num_list **stack_a, num_list **stack_b);
void	ra(num_list **stack_a);
void	rb(num_list **stack_b);
void	rr(num_list **stack_a, num_list **stack_b);
void	sa(num_list **stack_a);
void	sb(num_list **stack_b);
void	ss(num_list **stack_a, num_list **stack_b);
int		locate_smallest_value(num_list *stack);
void	assign_position(num_list **stack);
void	quick_sort(num_list **stack_a, num_list **stack_b, int len);
void	radix_sort(num_list **stack_a, num_list **stack_b);
int		push_swap(char **numbers);

#endif

