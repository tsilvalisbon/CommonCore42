/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomandra <tomandra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/17 20:27:32 by tomandra          #+#    #+#             */
/*   Updated: 2025/05/17 20:27:32 by tomandra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(int c)
{
	if (write(1, &c, 1) < 0)
		return (-1);
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
		ft_putchar(s[i]);
		i++;
	}
	return (i);
}

void	ft_putnbr(int nb, int *count)
{
	unsigned int	number;

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

void	ft_uputnbr(unsigned int nb, int *count)
{
	if (nb >= 10)
		ft_uputnbr(nb / 10, count);
	*count += ft_putchar(nb % 10 + 48);
}
