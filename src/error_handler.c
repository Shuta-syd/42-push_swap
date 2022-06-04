/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_handler.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shogura <shogura@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/29 16:22:09 by shogura           #+#    #+#             */
/*   Updated: 2022/06/04 17:57:29 by shogura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

void	fail_to_allocate_mem(t_stack **stack)
{
	t_stack	*tmp;

	while (stack && *stack)
	{
		tmp = (*stack)->previous;
		free(*stack);
		*stack = tmp;
	}
	ft_putstr("ERROR\nFailed to malloc mem");
	return ;
}

void	error_argv(int pattern)
{
	if (pattern == 1)
		ft_putstr("ERROR\nToo few args\n");
	else if (pattern == 2)
		ft_putstr("ERROR\nargs aren't int or duplicate num\n");
	exit(1);
}
