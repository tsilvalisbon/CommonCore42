/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomandra <tomandra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/13 20:30:52 by tomandra          #+#    #+#             */
/*   Updated: 2025/05/03 17:43:12 by tomandra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*temps1;
	unsigned char	*temps2;

	i = 0;
	temps1 = (unsigned char *)s1;
	temps2 = (unsigned char *)s2;
	while (i < n)
	{
		if (temps1[i] != temps2[i] || temps1[i] == '\0')
		{
			return (temps1[i] - temps2[i]);
		}
		i++;
	}
	return (0);
}
// int	main(void)
// {
// 	const char *str1 = "Hello, World!";
// 	const char *str2 = "Hello, Universe!";
// 	const char *str3 = "Hello, World!";
// 	const char *str4 = "Hi!";

// 	printf("Comparing \"%s\" and \"%s\" (n = 5): %d\n", str1, str2,
// 		ft_strncmp(str1, str2, 5));
// 	printf("Comparing \"%s\" and \"%s\" (n = 13): %d\n", str1, str3,
// 		ft_strncmp(str1, str3, 13));
// 	printf("Comparing \"%s\" and \"%s\" (n = 2): %d\n", str1, str4,
// 		ft_strncmp(str1, str4, 2));

// 	printf("\nNormal strnmcp:\n");
// 	printf("Comparing \"%s\" and \"%s\" (n = 5): %d\n", str1, str2,
// 		strncmp(str1, str2, 5));
// 	printf("Comparing \"%s\" and \"%s\" (n = 13): %d\n", str1, str3,
// 		strncmp(str1, str3, 13));
// 	printf("Comparing \"%s\" and \"%s\" (n = 2): %d\n", str1, str4,
// 		strncmp(str1, str4, 2));
// }