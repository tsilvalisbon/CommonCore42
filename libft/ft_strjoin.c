/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomandra <tomandra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 15:01:45 by tomandra          #+#    #+#             */
/*   Updated: 2025/04/23 14:15:22 by tomandra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_strdcat(char *dest, char const *s1, char const *s2)
{
	size_t	i;
	size_t	j;

	j = 0;
	i = 0;
	while (s1[i])
	{
		dest[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j])
	{
		dest[i + j] = s2[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	length;

	if (!s1 || !s2)
		return (NULL);
	length = ft_strlen(s1) + ft_strlen(s2);
	str = malloc(length + 1);
	if (!str)
		return (NULL);
	ft_strdcat(str, s1, s2);
	return (str);
}

// int	main(void)
// {
// 	char	*s1;
// 	char	*s2;
// 	char	*result;

// 	s1 = "Forty";
// 	s2 = "Two";
// 	result = ft_strjoin(s1, s2);
// 	if (result)
// 	{
// 		printf("Result: \"%s\"\n", result);
// 		free(result);
// 	}
// 	else
// 	{
// 		printf("Memory allocation failed or NULL input.\n");
// 	}
// 	return (0);
// }
