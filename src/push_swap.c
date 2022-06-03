/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shogura <shogura@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 17:48:05 by shogura           #+#    #+#             */
/*   Updated: 2022/06/03 18:10:16 by shogura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

void	push_argv_to_stack(int len, char const *src[], t_stack **stack)
{
	int			i;
	t_stack		*tmp;

	i = 0;
	tmp = NULL;
	while (i < len)
	{
		*stack = lstnew(atoi(src[i]), -1);
		if (*stack == NULL)
			fail_to_allocate_mem(&tmp);
		if (i == 0)
			tmp = *stack;
		else
		{
			(*stack)->previous = tmp;
			tmp->next = *stack;
			tmp = *stack;
		}
		*stack = (*stack)->next;
		i++;
	}
	*stack = lstfisrt(tmp);
}

int	main(int argc, char const *argv[])
{
	t_stack	*stack_a;
	t_stack	*stack_b;

	stack_a = NULL;
	stack_b = NULL;
	scan_args(argc, argv);
	push_argv_to_stack(argc - 1, &argv[1], &stack_a);
	sort_stack(&stack_a, &stack_b);
	return (0);
}
