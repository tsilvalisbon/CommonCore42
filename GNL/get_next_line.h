/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomandra <tomandra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 16:25:33 by tomandra          #+#    #+#             */
/*   Updated: 2025/05/30 18:25:18 by tomandra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <fcntl.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

char	*get_next_line(int fd);
char	*ft_strjoin(char *s1, char *s2);
int		ft_strlen(char *str);
void	manage_buffer(char *buffer);
char	*ft_strchr(const char *str, int c);
char	*read_and_join_line(int fd, char *line, char *rest);

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 10
# endif

#endif