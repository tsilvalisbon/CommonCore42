/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomandra <tomandra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 15:08:24 by tomandra          #+#    #+#             */
/*   Updated: 2025/05/01 17:45:13 by tomandra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	length;

	i = 0;
	length = 0;
	while (src[length] != '\0')
		length++;
	if (size > 0)
	{
		while (src[i] != '\0' && i < size - 1)
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (length);
}
// int	main(void)
// {
// 	char src[] = "Hello, world!";
// 	char dst[6];
// 	size_t src_len;

// 	src_len = ft_strlcpy(dst, src, sizeof(dst));
// 	printf("Source: \"%s\"\n", src);
// 	printf("Destination: \"%s\"\n", dst);
// 	printf("Source length: %zu\n", src_len);
// 	printf("Destination buffer size: %zu\n", sizeof(dst));
// }