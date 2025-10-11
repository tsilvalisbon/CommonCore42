/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomandra <tomandra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/18 15:49:20 by tomandra          #+#    #+#             */
/*   Updated: 2025/05/18 15:49:20 by tomandra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_parse_format(char c, va_list args)
{
	int	count;

	count = 0;
	if (c == 'c')
		count = ft_putchar(va_arg(args, int));
	else if (c == 's')
		count = ft_putstr(va_arg(args, char *));
	else if (c == 'd' || c == 'i')
		ft_putnbr(va_arg(args, int), &count);
	else if (c == 'u')
		ft_uputnbr(va_arg(args, unsigned int), &count);
	else if (c == 'X')
		ft_hex_putnbr(va_arg(args, unsigned int), "0123456789ABCDEF", &count);
	else if (c == 'x')
		ft_hex_putnbr(va_arg(args, unsigned int), "0123456789abcdef", &count);
	else if (c == 'p')
		ft_putptr(va_arg(args, void *), &count);
	else if (c == '%')
		count = ft_putchar('%');
	return (count);
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		i;
	int		count;

	i = 0;
	count = 0;
	va_start(args, str);
	if (!str)
		return (-1);
	while (str[i])
	{
		if (str[i] == '%' && str[i + 1])
		{
			count += ft_parse_format(str[i + 1], args);
			i += 2;
		}
		else
			count += ft_putchar(str[i++]);
	}
	va_end(args);
	if (count < 0)
		return (-1);
	return (count);
}
