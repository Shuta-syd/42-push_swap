/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   selection_sort.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shogura <shogura@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 21:13:15 by shogura           #+#    #+#             */
/*   Updated: 2022/06/03 17:47:51 by shogura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

// Find the list of minimum index
t_stack	*find_min_index_list(t_stack *stack)
{
	t_stack	*minlst;

	minlst = stack;
	while (stack)
	{
		if (minlst->index > stack->index)
			minlst = stack;
		stack = stack->next;
	}
	return (minlst);
}

void	move_minlst_to_top(t_stack **stack_a, int index)
{
	while (*stack_a != NULL && (*stack_a)->index != index)
		ra(stack_a, false);
}

void	push_to_stack_a(t_stack **stack_a, t_stack **stack_b, int len)
{
	int	i;

	i = 0;
	while (i++ < len)
		pa(stack_a, stack_b);
}

void	selection_sort(t_stack **stack_a, t_stack **stack_b, int len)
{
	int	index;

	index = 0;
	while (index < len)
	{
		move_minlst_to_top(stack_a, index);
		pb(stack_a, stack_b);
		index++;
	}
	push_to_stack_a(stack_a, stack_b, len);
}
