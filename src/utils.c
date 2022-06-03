/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shogura <shogura@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 21:16:22 by shogura           #+#    #+#             */
/*   Updated: 2022/06/03 17:46:22 by shogura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

void	set_index(t_stack **stack, int len)
{
	int		i;
	int		min;
	t_stack	*tmp;
	t_stack	*min_list;

	i = 0;
	while (i < len)
	{
		tmp = *stack;
		min = INT_MAX;
		while (tmp)
		{
			if (tmp->num < min && tmp->index == -1)
			{
				min = tmp->num;
				min_list = tmp;
			}
			tmp = tmp->next;
		}
		min_list->index = i;
		i++;
	}
}

int	find_mid_point(t_stack *stack, int low, int high)
{
	int	sum;
	int	size;

	sum = 0;
	size = high - low;
	while (low < high && stack)
	{
		sum += stack->index;
		stack = stack->next;
	}
	return (sum / (high - low));
}

bool	is_sorted(t_stack *stack)
{
	while (stack->next)
	{
		if (stack->index > stack->next->index)
			return (false);
		stack = stack->next;
	}
	return (true);
}
