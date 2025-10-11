/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomandra <tomandra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 16:49:38 by tomandra          #+#    #+#             */
/*   Updated: 2025/05/07 16:57:14 by tomandra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;

	if (!n)
		return (dest);
	d = (unsigned char *)dest;
	s = (const unsigned char *)src;
	if (d < s)
		ft_memcpy(dest, src, n);
	else
	{
		while (n > 0)
		{
			n--;
			d[n] = s[n];
		}
	}
	return (dest);
}

// int main()
// {
// 	char str1[] = "ABCDEF";
// 	char str2[] = "ABCDEF";

// 	printf("%s\n",(char *)memmove(str1 + 2, str1, 4));
// 	printf("%s\n", (char *)ft_memmove(str2 + 2, str2, 4));
// }