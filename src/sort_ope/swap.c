/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shogura <shogura@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 16:23:17 by shogura           #+#    #+#             */
/*   Updated: 2022/05/28 19:19:58 by shogura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

void	sa(t_stack **stack, bool both)
{
	t_stack	*tmp;

	tmp = *stack;
	*stack = (*stack)->next;
	(*stack)->next = tmp;
	if (!both)
		ft_putstr("sa\n");
	return ;
}

void	sb(t_stack **stack, bool both)
{
	t_stack	*tmp;

	tmp = *stack;
	*stack = (*stack)->next;
	(*stack)->next = tmp;
	if (!both)
		ft_putstr("sb\n");
	return ;
}

void	ss(t_stack **stack_a, t_stack **stack_b)
{
	sa(stack_a, true);
	sb(stack_b, true);
	ft_putstr("ss\n");
	return ;
}
