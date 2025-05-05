/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomandra <tomandra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 20:11:17 by tomandra          #+#    #+#             */
/*   Updated: 2025/05/03 20:11:01 by tomandra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}

// void	to_upper(unsigned int i, char *c)
// {
// 	if (*c >= 'a' && *c <= 'z')
// 		*c = *c - 'a' + 'A';
// 	printf("Character at index %u: %c\n", i, *c);
// }

// int	main(void)
// {
// 	char str[] = "hello";

// 	printf("\nOriginal: %s\n", str);
// 	ft_striteri(str, to_upper);
// 	printf("Uppercase: %s\n", str);

// 	return (0);
// }