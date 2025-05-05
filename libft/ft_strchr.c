/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomandra <tomandra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 16:47:03 by tomandra          #+#    #+#             */
/*   Updated: 2025/05/03 17:32:56 by tomandra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	int	i;

	i = 0;
	while (str[i] != (char)c && str[i] != '\0')
	{
		i++;
	}
	if (str[i] == (char)c)
		return ((char *)&str[i]);
	return (NULL);
}
// int	main(void)
// {
// 	char	*result;

// 	result = ft_strchr("Hello this is me", 116); // t
// 	printf("%s", result);
// }
