/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shogura <shogura@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 16:23:25 by shogura           #+#    #+#             */
/*   Updated: 2022/06/03 17:48:54 by shogura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

void	rra(t_stack **stack, bool both)
{
	t_stack	*top;
	t_stack	*last;

	top = lstfisrt(*stack);
	last = lstlast(*stack);
	top->previous = last;
	top->next = NULL;
	last->next = top;
	if (!both)
		ft_putstr("ra\n");
}

void	rrb(t_stack **stack, bool both)
{
	t_stack	*top;
	t_stack	*last;

	top = lstfisrt(*stack);
	last = lstlast(*stack);
	top->previous = last;
	top->next = NULL;
	last->next = top;
	if (!both)
		ft_putstr("ra\n");
}

void	rrr(t_stack **stack_a, t_stack **stack_b)
{
	rra(stack_a, true);
	rrb(stack_b, true);
	ft_putstr("rrr\n");
	return ;
}
