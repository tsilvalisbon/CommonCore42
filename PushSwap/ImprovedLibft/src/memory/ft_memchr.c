/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomandra <tomandra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 16:26:07 by tomandra          #+#    #+#             */
/*   Updated: 2025/05/07 16:26:07 by tomandra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	size_t				i;
	const unsigned char	*s;

	i = 0;
	s = (const unsigned char *)str;
	while (i < n)
	{
		if (s[i] == (unsigned char)c)
			return ((void *)(s + i));
		i++;
	}
	return (NULL);
}

// int	main(void)
// {
// 	void *std_res;
// 	void *ft_res;
// 	const char *str1 = "Hello, world!";
// 	const char *str2 = "abcdefg";
// 	const char *str3 = "1234567890";

// 	// Test 1: Find 'o' in "Hello, world!"
// 	std_res = memchr(str1, 'o', 13);
// 	ft_res = ft_memchr(str1, 'o', 13);
// 	printf("Test 1: Find 'o' in \"%s\"\n", str1);
// 	printf("  memchr:    ");
// 	if (std_res)
// 	{
// 		printf("%s\n", (char *)std_res);
// 	}
// 	else
// 	{
// 		printf("NULL\n");
// 	}
// 	printf("  ft_memchr: ");
// 	if (ft_res)
// 	{
// 		printf("%s\n", (char *)ft_res);
// 	}
// 	else
// 	{
// 		printf("NULL\n");
// 	}

// 	// Test 2: Find 'g' in "abcdefg"
// 	std_res = memchr(str2, 'g', 7);
// 	ft_res = ft_memchr(str2, 'g', 7);
// 	printf("\nTest 2: Find 'g' in \"%s\"\n", str2);
// 	printf("  memchr:    ");
// 	if (std_res)
// 	{
// 		printf("%s\n", (char *)std_res);
// 	}
// 	else
// 	{
// 		printf("NULL\n");
// 	}
// 	printf("  ft_memchr: ");
// 	if (ft_res)
// 	{
// 		printf("%s\n", (char *)ft_res);
// 	}
// 	else
// 	{
// 		printf("NULL\n");
// 	}

// 	// Test 3: Find 'x' (not present) in "1234567890"
// 	std_res = memchr(str3, 'x', 10);
// 	ft_res = ft_memchr(str3, 'x', 10);
// 	printf("\nTest 3: Find 'x' in \"%s\"\n", str3);
// 	printf("  memchr:    ");
// 	if (std_res)
// 	{
// 		printf("%s\n", (char *)std_res);
// 	}
// 	else
// 	{
// 		printf("NULL\n");
// 	}
// 	printf("  ft_memchr: ");
// 	if (ft_res)
// 	{
// 		printf("%s\n", (char *)ft_res);
// 	}
// 	else
// 	{
// 		printf("NULL\n");
// 	}

// 	// Test 4: n = 0 (should return NULL)
// 	std_res = memchr(str1, 'o', 0);
// 	ft_res = ft_memchr(str1, 'o', 0);
// 	printf("\nTest 4: Find '\\0' in \"%s\"\n", str1);
// 	printf("  memchr:    ");
// 	if (std_res)
// 	{
// 		printf("Found\n");
// 	}
// 	else
// 	{
// 		printf("NULL\n");
// 	}
// 	printf("  ft_memchr: ");
// 	if (ft_res)
// 	{
// 		printf("Found\n");
// 	}
// 	else
// 	{
// 		printf("NULL\n");
// 	}

// 	return (0);
// }
