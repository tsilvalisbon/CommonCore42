/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomandra <tomandra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 16:24:31 by tomandra          #+#    #+#             */
/*   Updated: 2025/05/30 18:14:28 by tomandra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	if (!str)
		return (0);
	while (str[i] != '\0' && str[i] != '\n')
		i++;
	if (str[i] == '\n')
		i++;
	return (i);
}

char	*ft_strjoin(char *s1, char *s2)
{
	char	*str;
	int		i;
	int		j;

	i = 0;
	j = 0;
	str = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!str)
		return (free(s1), NULL);
	while (s1 && s1[i] && s1[i] != '\n')
		str[j++] = s1[i++];
	i = 0;
	while (s2 && s2[i] && s2[i] != '\n')
		str[j++] = s2[i++];
	if (s2 && s2[i] == '\n')
		str[j++] = '\n';
	str[j] = '\0';
	return (free(s1), str);
}

void	manage_buffer(char *buffer)
{
	int	end_idx;
	int	new_line_idx;

	end_idx = 0;
	new_line_idx = 0;
	while (buffer[end_idx] != '\0' && buffer[end_idx] != '\n')
		end_idx++;
	if (buffer[end_idx] == '\n')
		end_idx++;
	while (buffer[end_idx] != '\0')
	{
		buffer[new_line_idx] = buffer[end_idx];
		new_line_idx++;
		end_idx++;
	}
	while (new_line_idx < BUFFER_SIZE)
		buffer[new_line_idx++] = '\0';
}

char	*ft_strchr(const char *str, int c)
{
	int	i;

	i = 0;
	while (str[i] != (char)c && str[i] != '\0')
	{
		i++;
	}
	if (str[i] == (char)c)
		return ((char *)&str[i]);
	return (NULL);
}

char	*read_and_join_line(int fd, char *line, char *rest)
{
	int	bytes;

	bytes = 1;
	while (1)
	{
		if (ft_strchr(line, '\n'))
			break ;
		bytes = read(fd, rest, BUFFER_SIZE);
		if (bytes <= 0)
			break ;
		rest[bytes] = '\0';
		line = ft_strjoin(line, rest);
		if (!line)
			return (NULL);
	}
	return (line);
}
