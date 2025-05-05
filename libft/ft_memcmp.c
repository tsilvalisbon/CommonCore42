/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomandra <tomandra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 15:09:31 by tomandra          #+#    #+#             */
/*   Updated: 2025/04/26 19:28:20 by tomandra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	size_t				i;
	const unsigned char	*s1;
	const unsigned char	*s2;

	i = 0;
	s1 = (const unsigned char *)str1;
	s2 = (const unsigned char *)str2;
	while (i < n)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

// int	main(void)
// {
// 	char	*a;
// 	char	*b;
// 	char	*c;
// 	char	*d;

// 	a = "Hello World!";
// 	b = "Hello World";
// 	c = "Hello World";
// 	d = "Hello Worly";
// 	printf("ft_memcmp function:\n");
// 	printf("memcmp(a, b, 11) = %d\n", ft_memcmp(a, b, 11));
// 	printf("memcmp(a, c, 12) = %d\n", ft_memcmp(a, c, 12));
// 	printf("memcmp(a, d, 11) = %d\n", ft_memcmp(a, d, 12));
// 	printf("memcmp(a, c, 5) = %d\n\n", ft_memcmp(a, c, 5));

// 	printf("memcmp function:\n");
// 	printf("memcmp(a, b, 11) = %d\n", memcmp(a, b, 11));
// 	printf("memcmp(a, c, 12) = %d\n", memcmp(a, c, 12));
// 	printf("memcmp(a, d, 11) = %d\n", memcmp(a, d, 12));
// 	printf("memcmp(a, c, 5) = %d\n", memcmp(a, c, 5));
// 	return (0);
// }
