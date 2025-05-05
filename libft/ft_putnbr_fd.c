/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomandra <tomandra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 15:50:40 by tomandra          #+#    #+#             */
/*   Updated: 2025/04/26 19:42:00 by tomandra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	number;

	if (fd < 0)
		return ;
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		number = n * -1;
	}
	else
		number = n;
	if (number >= 10)
		ft_putnbr_fd(number / 10, fd);
	ft_putchar_fd(number % 10 + 48, fd);
}

// int main(void) {
//     int fd = open("test_numbers.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
//     if (fd < 0) {
//         printf("Failed to open file!\n");
//         return 1;
//     }

//     // Write several numbers to the file
//     ft_putnbr_fd(0, fd);
//     ft_putchar_fd('\n', fd);
//     ft_putnbr_fd(12345, fd);
//     ft_putchar_fd('\n', fd);
//     ft_putnbr_fd(-67890, fd);
//     ft_putchar_fd('\n', fd);
//     ft_putnbr_fd(2147483647, fd);
//     ft_putchar_fd('\n', fd);
//     ft_putnbr_fd(-2147483648, fd);
//     ft_putchar_fd('\n', fd);

//     close(fd);

//     printf("Numbers written to test_numbers.txt\n");
//     return 0;
// }