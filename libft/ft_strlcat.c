/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomandra <tomandra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/13 20:44:20 by tomandra          #+#    #+#             */
/*   Updated: 2025/05/03 17:46:46 by tomandra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	i;

	dst_len = 0;
	while (dst[dst_len] != '\0')
		dst_len++;
	src_len = 0;
	while (src[src_len] != '\0')
		src_len++;
	if (size <= dst_len)
		return (size + src_len);
	i = 0;
	while (src[i] != '\0' && (dst_len + i) < (size - 1))
	{
		dst[dst_len + i] = src[i];
		i++;
	}
	dst[dst_len + i] = '\0';
	return (dst_len + src_len);
}

// int main(void)
// {
//     char buffer[20] = "Hello";
//     const char *src = " World!";
//     size_t size = sizeof(buffer);
//     size_t result;

//     printf("Before: \"%s\"\n", buffer);

//     result = ft_strlcat(buffer, src, size);

//     printf("After:  \"%s\"\n", buffer);
//     printf("Returned length: %zu\n", result);

//     // Test with size = 0
//     char zerobuf[10] = "abc";
// 	printf("\nSize 0 test:\n");
// 	printf("Before: \"%s\"\n", zerobuf);
//     result = ft_strlcat(zerobuf, "def", 0);
//     printf("After:  \"%s\"\n", zerobuf);
//     printf("Returned length: %zu\n", result);

//     return 0;
// }