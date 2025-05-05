/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomandra <tomandra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 19:01:49 by tomandra          #+#    #+#             */
/*   Updated: 2025/04/13 18:44:11 by tomandra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

void	*ft_memset(void *dest, int c, size_t count)
{
	size_t			i;
	unsigned char	*s;

	i = 0;
	s = (unsigned char *)dest;
	while (i < count)
	{
		s[i] = (unsigned char)c;
		i++;
	}
	return (s);
}
// int	main(void)
// {
// 	char buffer[20] = "Hello, World!";

// 	printf("Before ft_memset: %s\n", buffer);

// 	ft_memset(buffer + 7, 'A', 5);
// 	printf("After ft_memset: %s\n", buffer);

// 	memset(buffer + 7, 'A', 5);
// 	printf("After standard memset: %s\n", buffer);

// 	return (0);
// }