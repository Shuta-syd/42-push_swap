/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shogura <shogura@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 17:48:07 by shogura           #+#    #+#             */
/*   Updated: 2022/06/03 18:42:14 by shogura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <stdlib.h>
# include <unistd.h>
# include <stdbool.h>
# include <stdio.h>
# include <limits.h>
# include "../src/libft/libft.h"

typedef struct s_stack
{
	int					index;
	int					num;
	struct s_stack		*next;
	struct s_stack		*previous;
}	t_stack;

void	scan_args(int argc, char const *argv[]);

//list operations
t_stack	*lstnew(int num, int index);
t_stack	*lstlast(t_stack *lst);
t_stack	*lstfisrt(t_stack *stack);
int		lstsize(t_stack *stack);
void	lstdelone(t_stack **lst);
void	lstadd_front(t_stack **lst, t_stack *new);
void	lstadd_back(t_stack **lst, t_stack *new);

//sort operations
void	sa(t_stack **stack, bool both);
void	sb(t_stack **stack, bool both);
void	ss(t_stack **stack_a, t_stack **stack_b);
void	pa(t_stack **stack_a, t_stack **stack_b);
void	pb(t_stack **stack_a, t_stack **stack_b);
void	ra(t_stack **stack, bool both);
void	rb(t_stack **stack, bool both);
void	rr(t_stack **stack_a, t_stack **stack_b);
void	rra(t_stack **stack, bool both);
void	rrb(t_stack **stack, bool both);
void	rrr(t_stack **stack_a, t_stack **stack_b);

// sort functions
void	sort_stack(t_stack **stack_a, t_stack **stack_b);
void	selection_sort(t_stack **stack_a, t_stack **stack_b, int len);
void	radix_sort(t_stack **stack_a, t_stack **stack_b, int len);

// error handler
void	fail_to_allocate_mem(t_stack **stack);
void	error_argv(int pattern);

//others
void	print_stack(t_stack *stack);
void	set_index(t_stack **stack, int len);
void	push_to_stack_a(t_stack **stack_a, t_stack **stack_b, int len);
bool	is_sorted(t_stack *stack);
int		find_mid_point(t_stack *stack, int low, int high);
#endif
