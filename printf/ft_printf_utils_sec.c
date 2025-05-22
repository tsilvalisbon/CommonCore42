/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils_sec.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomandra <tomandra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/18 15:52:19 by tomandra          #+#    #+#             */
/*   Updated: 2025/05/18 16:06:55 by tomandra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_hex_putnbr(unsigned long nb, char *hex, int *count)
{
	if (nb >= 16)
		ft_hex_putnbr(nb / 16, hex, count);
	*count += ft_putchar(hex[nb % 16]);
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
	*count += write(1, "0x", 2);
	ft_hex_putnbr(address, hex, count);
}
