/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomandra <tomandra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/17 20:24:02 by tomandra          #+#    #+#             */
/*   Updated: 2025/05/17 20:26:12 by tomandra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

int		ft_printf(const char *str, ...);
int		ft_putchar(int c);
int		ft_putstr(char *s);
void	ft_putnbr(int nb, int *count);
void	ft_uputnbr(unsigned int nb, int *count);
void	ft_putptr(void *ptr, int *count);
void	ft_hex_putnbr(unsigned long nb, char *hex, int *count);

#endif
