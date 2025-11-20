/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+
	+:+     */
/*   By: tomandra <tomandra@student.42.fr>          +#+  +:+
	+#+        */
/*                                                +#+#+#+#+#+
	+#+           */
/*   Created: 2025/04/23 15:04:01 by tomandra          #+#    #+#             */
/*   Updated: 2025/04/23 15:04:01 by tomandra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int		i;
	char	*s;

	i = 0;
	s = (char *)str;
	while (s[i] != '\0')
		i++;
	while (i >= 0)
	{
		if (str[i] == (char)c)
			return (s + i);
		i--;
	}
	return (NULL);
}
// int	main(void)
// {
// 	char *str = "hello world";
// 	char c = 'l';
// 	char *result = ft_strrchr(str , c);
// 	printf("%s\n",result);
// }