/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomandra <tomandra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 16:31:05 by tomandra          #+#    #+#             */
/*   Updated: 2025/05/03 17:33:45 by tomandra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_strcpy(char *dest, const char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strdup(const char *s)
{
	char	*dest;
	int		length;

	length = ft_strlen(s);
	dest = malloc(length + 1);
	if (dest == NULL)
		return (NULL);
	else
		ft_strcpy(dest, s);
	return (dest);
}
// #include <stdio.h>
// int main()
// {
// 	char	src[] = "Twenty One";
// 	char	*dest = ft_strdup(src);

// 	printf("Original: %s\n", src);
// 	printf("Duplicate: %s\n", dest);
// 	free(dest);
// }
