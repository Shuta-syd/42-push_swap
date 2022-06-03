/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shogura <shogura@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 21:41:40 by shogura           #+#    #+#             */
/*   Updated: 2022/06/03 18:43:50 by shogura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

void	print_stack(t_stack *stack)
{
	while (stack)
	{
		printf("index->[%d] num->[%d]\n", stack->index, stack->num);
		stack = stack->next;
	}
	printf("\n");
}

void	sort_stack(t_stack **stack_a, t_stack **stack_b)
{
	int	len;

	len = lstsize(*stack_a);
	set_index(stack_a, len);
	if (is_sorted(*stack_a))
		return ;
	if (len == 2)
		sa(stack_a, false);
	else if (len <= 5)
		selection_sort(stack_a, stack_b, len);
	else if (len > 5)
		radix_sort(stack_a, stack_b, len);
	return ;
}
