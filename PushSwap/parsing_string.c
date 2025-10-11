/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomandra <tomandra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/17 16:29:31 by tomandra          #+#    #+#             */
/*   Updated: 2025/09/17 16:42:53 by tomandra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

static void	ft_err_strjoin(char **temp, char *str)
{
	char	*new_str;

	new_str = ft_strjoin(*temp, str);
	if (!new_str)
	{
		ft_putstr_fd("Error!\n", 2);
		exit(1);
	}
	free(*temp);
	*temp = new_str;
}

static char	*ft_join_string(char **argv)
{
	char	*temp;
	int		i;

	i = 1;
	temp = ft_strdup("");
	if (!temp)
	{
		ft_putstr_fd("Error!\n", 2);
		exit(1);
	}
	while (argv[i])
	{
		if (ft_ifspaces(argv[i]))
		{
			ft_putstr_fd("Error!\n", 2);
			free(temp);
			exit(1);
		}
		ft_err_strjoin(&temp, argv[i]);
		ft_err_strjoin(&temp, " ");
		i++;
	}
	return (temp);
}

char	**ft_string_parse(char **argv)
{
	char	**str;
	char	*temp;

	temp = NULL;
	temp = ft_join_string(argv);
	str = ft_split(temp, ' ');
	free(temp);
	return (str);
}
