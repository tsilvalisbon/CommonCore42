/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomandra <tomandra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/09 16:28:23 by tomandra          #+#    #+#             */
/*   Updated: 2025/05/13 20:51:41 by tomandra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_parse_format(const char *str, va_list args, int *i)
{
	while (str[*i])
	{
		if (str[*i] == '%')
		{
			(*i)++;
			if (str[*i] == 'c')
				ft_putchar(va_arg(args, char));
			else if (str[*i] == 'd' || str[*i] == 'i')
				ft_putnbr(va_arg(args, int));
		}
		(i)++;
	}
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int i;
	
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
