/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomandra <tomandra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/13 18:25:13 by tomandra          #+#    #+#             */
/*   Updated: 2025/05/03 16:54:39 by tomandra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <strings.h>

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}
// int main()
// {
// 	char buffer[20] = "Hello, World!";

// 	printf("Before bzero: %s\n", buffer);

// 	ft_bzero(buffer + 7, 5);
// 	printf("After bzero: %s\n", buffer);

// 	bzero(buffer + 7, 5);
// 	printf("After standard bzero: %s\n", buffer);

// 	return (0);
// }