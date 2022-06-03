/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shogura <shogura@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 16:23:21 by shogura           #+#    #+#             */
/*   Updated: 2022/06/03 11:42:51 by shogura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

void	pa(t_stack **stack_a, t_stack **stack_b)
{
	t_stack	*top_a;
	t_stack	*top_b;

	top_a = lstfisrt(*stack_a);
	top_b = lstfisrt(*stack_b);
	*stack_a = top_b;
	*stack_b = top_b->next;
	if (top_b->next != NULL)
		top_b->next->previous = NULL;
	top_b->previous = NULL;
	if (top_a == NULL)
		top_b->next = NULL;
	else
	{
		top_b->next = top_a;
		top_a->previous = top_b;
	}
	ft_putstr("pa\n");
}

void	pb(t_stack **stack_a, t_stack **stack_b)
{
	t_stack	*top_a;
	t_stack	*top_b;

	top_a = lstfisrt(*stack_a);
	top_b = lstfisrt(*stack_b);
	*stack_a = top_a->next;
	*stack_b = top_a;
	if (top_a->next != NULL)
		top_a->next->previous = NULL;
	top_a->previous = NULL;
	if (top_b == NULL)
		top_a->next = NULL;
	else
	{
		top_a->next = top_b;
		top_b->previous = top_a;
	}
	ft_putstr("pb\n");
}
