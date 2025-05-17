/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomandra <tomandra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 18:39:42 by tomandra          #+#    #+#             */
/*   Updated: 2025/05/15 20:07:46 by tomandra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_putstr(char *s)
{
	int	i;

	i = 0;
	if (!s)
		return (ft_putstr("(null)"));
	while (s[i] != '\0')
	{
		write(1, &s[i], 1);
		i++;
	}
	return (i);
}

void	ft_putnbr(int nb, int *count)
{
	long	number;

	if (nb < 0)
	{
		*count += ft_putchar('-');
		number = nb * -1;
	}
	else
		number = nb;
	if (number >= 10)
		ft_putnbr(number / 10, count);
	*count += ft_putchar(number % 10 + 48);
}

void	ft_hex_putnbr(unsigned int nb, char *hex, int *count)
{
	if (nb >= 16)
		ft_hex_putnbr(nb / 16, hex, count);
	*count += ft_putchar(hex[nb % 16]);
}

void	ft_uputnbr(unsigned int nb, int *count)
{
	if (nb >= 10)
		ft_uputnbr(nb / 10, count);
	*count += ft_putchar(nb % 10 + 48);
}

void	ft_putptr(void *ptr, int *count)
{
	unsigned long	address;
	char			*hex;

	hex = "0123456789abcdef";
	address = (unsigned long)ptr;
	if (!ptr)
	{
		*count += ft_putstr("(nil)");
		return ;
	}
	*count += ft_putstr("0x");
	if (address >= 16)
		ft_putptr((void *)(address / 16), count);
	*count += ft_putchar(hex[address % 16]);
}