/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomandra <tomandra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 15:19:21 by tomandra          #+#    #+#             */
/*   Updated: 2025/05/01 17:36:28 by tomandra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	i;
	size_t	length;

	if (!s)
		return (NULL);
	length = ft_strlen(s);
	if (start >= length)
		return (ft_strdup(""));
	if (length - start < len)
		len = length - start;
	substr = malloc(len + 1);
	if (!substr)
		return (NULL);
	i = 0;
	while (i < len)
	{
		substr[i] = s[start + i];
		i++;
	}
	substr[i] = '\0';
	return (substr);
}

// int main(void)
// {
//     char *result;

//     // Test 1: Normal substring
//     result = ft_substr("Hello, world!", 7, 5);
//     printf("Test 1: \"%s\"\n", result);
//     free(result);

//     // Test 2: Start beyond length
//     result = ft_substr("Short", 10, 3);
//     printf("Test 2: \"%s\"\n", result);
//     free(result);

//     // Test 3: Length exceeds string
//     result = ft_substr("Edge", 2, 10);
//     printf("Test 3: \"%s\"\n", result);
//     free(result);

//     // Test 4: Empty string
//     result = ft_substr("", 0, 5);
//     printf("Test 4: \"%s\"\n", result);
//     free(result);

//     // Test 5: NULL input
//     result = ft_substr(NULL, 0, 5);
//     printf("Test 5: %s\n", result == NULL ? "NULL" : result);
//     free(result);

//     return 0;
// }