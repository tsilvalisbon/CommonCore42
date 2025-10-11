/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing_args.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomandra <tomandra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/22 16:49:14 by tsilv             #+#    #+#             */
/*   Updated: 2025/10/11 17:20:54 by tomandra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

static int	ft_valid_args(char **argv)
{
	int	i;
	int	j;

	i = 0;
	while (argv[i])
	{
		j = 0;
		if (argv[i][j] == '-' || argv[i][j] == '+')
		{
			if (!argv[i][j + 1])
				return (0);
			j++;
		}
		while (argv[i][j])
		{
			if (!ft_isdigit(argv[i][j]))
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

static int	ft_is_dup(char **argv)
{
	int		i;
	int		j;
	long	a;
	long	b;

	i = 0;
	while (argv[i])
	{
		a = ft_atol(argv[i]);
		j = i + 1;
		while (argv[j])
		{
			b = ft_atol(argv[j]);
			if (a == b)
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	ft_in_range(char **argv)
{
	int		i;
	long	num;

	i = 0;
	while (argv[i])
	{
		num = ft_atol(argv[i]);
		if (num > INT_MAX || num < INT_MIN)
			return (0);
		i++;
	}
	return (1);
}

void	ft_parsing(char **argv)
{
	if (!ft_valid_args(argv) || !ft_in_range(argv) || !ft_is_dup(argv))
	{
		free_arr(argv);
		ft_putstr_fd("Error!\n", 2);
		exit(1);
	}
}
