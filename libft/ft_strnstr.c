/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomandra <tomandra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/13 20:59:26 by tomandra          #+#    #+#             */
/*   Updated: 2025/05/03 20:15:06 by tomandra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (*little == '\0')
		return ((char *)big);
	while (big[i] != '\0' && i < len)
	{
		if (big[i] == little[0])
		{
			j = 0;
			while ((i + j) < len && big[i + j] == little[j]
				&& little[j] != '\0')
				j++;
			if (little[j] == '\0')
				return ((char *)big + i);
		}
		i++;
	}
	return (NULL);
}
// int	main(void)
// {
// 	const char *big;
// 	const char *little;
// 	size_t len;
// 	char *result;

// 	// Test Case 1: Substring exists within the length
// 	big = "Hello, World!";
// 	little = "World";
// 	len = 12;
// 	result = ft_strnstr(big, little, len);
// 	printf("Test Case 1:\n");
// 	printf("Big: '%s'\n", big);
// 	printf("Little: '%s'\n", little);
// 	printf("Length: %zu\n", len);
// 	printf("Result: '%s'\n\n", result);

// 	// Test Case 2: Substring does not exist
// 	big = "Hello, World!";
// 	little = "42";
// 	len = 12;
// 	result = ft_strnstr(big, little, len);
// 	printf("Test Case 2:\n");
// 	printf("Big: '%s'\n", big);
// 	printf("Little: '%s'\n", little);
// 	printf("Length: %zu\n", len);
// 	if (result)
// 		printf("Result: '%s'\n\n", result);
// 	else
//  	printf("Result: (null)\n\n");

// 	// Test Case 3: Substring exists but exceeds length
// 	big = "Hello, World!";
// 	little = "World";
// 	len = 5;
// 	result = ft_strnstr(big, little, len);
// 	printf("Test Case 3:\n");
// 	printf("Big: '%s'\n", big);
// 	printf("Little: '%s'\n", little);
// 	printf("Length: %zu\n", len);
// 	if (result)
//     printf("Result: '%s'\n\n", result);
// 	else
//     printf("Result: (null)\n\n");

// 	// Test Case 4: Both strings are empty
// 	big = "";
// 	little = "";
// 	len = 0;
// 	result = ft_strnstr(big, little, len);
// 	printf("Test Case 6:\n");
// 	printf("Big: '%s'\n", big);
// 	printf("Little: '%s'\n", little);
// 	printf("Length: %zu\n", len);
// 	printf("Result: '%s'\n\n", result);

// 	return (0);
// }