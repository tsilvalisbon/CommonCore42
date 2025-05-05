/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomandra <tomandra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 19:06:38 by tomandra          #+#    #+#             */
/*   Updated: 2025/04/26 20:11:50 by tomandra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*str;
	unsigned int	i;
	size_t			length;

	if (!s || !f)
		return (NULL);
	length = ft_strlen(s);
	str = malloc(length + 1);
	if (!str)
		return (NULL);
	i = 0;
	while (i < length)
	{
		str[i] = (*f)(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}

// char caps_even(unsigned int i, char c)
// {
//     if (i % 2 == 0)
// 	{
//         if (c >= 'a' && c <= 'z')
//             return c - 32;
//     }
// 	else
// 	{
//         if (c >= 'A' && c <= 'Z')
//             return c + 32;
//     }
//     return c;
// }

// int	main(void)
// {
// 	char *original = "Hello World";
// 	char *result = ft_strmapi(original, caps_even);

// 	if (result)
// 	{
// 		printf("\nOriginal: %s\n", original);
// 		printf("New: %s\n\n", result);
// 		free(result);
// 	}
// 	else
// 		printf("Error: Memory allocation failed.\n\n");
// 	return (0);
// }