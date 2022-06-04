/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split_args.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shogura <shogura@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/04 15:47:01 by shogura           #+#    #+#             */
/*   Updated: 2022/06/04 16:35:26 by shogura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

void	free_nums(void **nums)
{
	int	i;

	i = 0;
	while (nums[i])
		free(nums[i++]);
	free(nums);
}

static void	scan_nums(int len, char const *nums[])
{
	int	i;

	i = 0;
	while (i < len)
	{
		if (!check_min_max(ft_atol(nums[i])) || !ft_isnum(nums[i])
			|| check_dup(len - 1, &nums[1], nums[i]))
			{
				free_nums((void **)nums);
				error_argv(3);
			}
		i++;
	}
}

char const	**split_args(const char *argv[])
{
	int		i;
	int		len;
	char const	**nums;

	i = 0;
	len = 1;
	nums = (char const**)ft_split(argv[1], ' ');
	if (nums == NULL)
		fail_to_allocate_mem(NULL);
	while (nums[i++])
		len++;
	if (len < 2)
	{
		free_nums((void **)nums);
		error_argv(1);
	}
	scan_nums(len - 1, nums);
	return (nums);
}
