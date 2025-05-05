/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomandra <tomandra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 15:06:27 by tomandra          #+#    #+#             */
/*   Updated: 2025/05/01 17:10:44 by tomandra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	n_length(int n)
{
	int	length;

	length = 0;
	if (n == 0)
		return (1);
	if (n < 0)
		length++;
	while (n != 0)
	{
		n /= 10;
		length++;
	}
	return (length);
}

char	*ft_itoa(int n)
{
	size_t	length;
	char	*result;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	length = n_length(n);
	result = malloc(length + 1);
	if (!result)
		return (NULL);
	result[length] = '\0';
	if (n == 0)
		result[0] = '0';
	if (n < 0)
	{
		result[0] = '-';
		n *= -1;
	}
	while (n != 0)
	{
		result[--length] = (n % 10) + '0';
		n /= 10;
	}
	return (result);
}
// int main(void)
// {
//     char *s;

//     // Test 1: Zero
//     s = ft_itoa(0);
//     printf("ft_itoa(0) = \"%s\"\n", s);
//     free(s);

//     // Test 2: Positive number
//     s = ft_itoa(12345);
//     printf("ft_itoa(12345) = \"%s\"\n", s);
//     free(s);

//     // Test 3: Negative number
//     s = ft_itoa(-6789);
//     printf("ft_itoa(-6789) = \"%s\"\n", s);
//     free(s);

//     // Test 4: INT_MIN
//     s = ft_itoa(-2147483648);
//     printf("ft_itoa(-2147483648) = \"%s\"\n", s);
//     free(s);

//     // Test 5: INT_MAX
//     s = ft_itoa(2147483647);
//     printf("ft_itoa(2147483647) = \"%s\"\n", s);
//     free(s);

//     return 0;
// }
