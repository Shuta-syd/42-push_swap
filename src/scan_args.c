/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   scan_args.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shogura <shogura@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 17:47:29 by shogura           #+#    #+#             */
/*   Updated: 2022/06/03 17:48:33 by shogura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

//check num duplication
bool	check_dup(int len, char const **str, char const *src)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (i < len)
	{
		if (ft_strcmp(str[i], src) == 0)
			count++;
		i++;
	}
	if (count > 1)
		return (true);
	return (false);
}

bool	check_min_max(long num)
{
	if (num > (long)INT_MAX || num < (long)INT_MIN)
		return (false);
	return (true);
}

// check args error
void	scan_args(int argc, char const *argv[])
{
	int	i;

	i = 1;
	if (argc == 1)
		error_argv(1);
	while (i < argc)
	{
		if (!check_min_max(ft_atol(argv[i])) || !ft_isnum(argv[i])
			|| check_dup(argc - 1, &argv[1], argv[i]))
			error_argv(2);
		i++;
	}
}
