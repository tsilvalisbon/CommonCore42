/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomandra <tomandra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 15:52:26 by tomandra          #+#    #+#             */
/*   Updated: 2025/05/15 20:06:51 by tomandra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

int		ft_printf(const char *, ...);
int		ft_putchar(char c);
int		ft_putstr(char *s);
int		ft_strlen(const char *s);
void	ft_putnbr(int nb, int *count);
void	ft_uputnbr(unsigned int nb, int *count);
void	ft_putptr(void *ptr, int *count);
void	ft_hex_putnbr(unsigned int nb, char *hex, int *count);

#endif