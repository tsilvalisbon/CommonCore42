/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomandra <tomandra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/09 16:28:23 by tomandra          #+#    #+#             */
/*   Updated: 2025/05/15 19:56:03 by tomandra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_parse_format(char c, va_list args, int *i)
{
	int	count;

	if (c == 'c')
		ft_putchar(va_arg(args, char));
	else if (c == 's')
		ft_putstr(va_arg(args, char *));
	else if (c == 'd' || c == 'i')
		ft_putnbr(va_arg(args, int), &count);
	else if (c == 'u')
		ft_uputnbr(va_arg(args, unsigned int), &count);
	else if (c == 'X')
		ft_hex_putnbr(va_arg(args, unsigned int), "0123456789ABCDEF", &count);
	else if (c == 'x')
		ft_hex_putnbr(va_arg(args, unsigned int), "0123456789abcdef", &count);
	else if (c == '%')
		ft_putchar('%');
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		i;

	i = 0;
	va_start(args, str);
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
	va_end(args);
	return (i);
}
int	main(void)
{
	printf("\n%d", ft_printf("ola %djij"));
}
