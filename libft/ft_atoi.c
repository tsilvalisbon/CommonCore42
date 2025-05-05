/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomandra <tomandra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 14:14:15 by tomandra          #+#    #+#             */
/*   Updated: 2025/04/26 18:24:49 by tomandra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	result;
	int	sign;

	i = 0;
	result = 0;
	sign = 1;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - 48);
		i++;
	}
	return (result * sign);
}

// int	main(void)
// {
// 	const char *test1 = "-987";
// 	printf("Test 1: \"%s\"\n", test1);
// 	printf("  atoi:    %d\n", atoi(test1));
// 	printf("  ft_atoi: %d\n\n", ft_atoi(test1));
// 	const char *test2 = "+-42";
// 	printf("Test 2: \"%s\"\n", test2);
// 	printf("  atoi:    %d\n", atoi(test2));
// 	printf("  ft_atoi: %d\n\n", ft_atoi(test2));
// 	const char *test3 = "    42";
// 	printf("Test 3: \"%s\"\n", test3);
// 	printf("  atoi:    %d\n", atoi(test3));
// 	printf("  ft_atoi: %d\n\n", ft_atoi(test3));
// 	const char *test4 = "-2147483648";
// 	printf("Test 4: \"%s\"\n", test4);
// 	printf("  atoi:    %d\n", atoi(test4));
// 	printf("  ft_atoi: %d\n\n", ft_atoi(test4));
// 	const char *test5 = "+77";
// 	printf("Test 5: \"%s\"\n", test5);
// 	printf("  atoi:    %d\n", atoi(test5));
// 	printf("  ft_atoi: %d\n\n", ft_atoi(test5));
// 	const char *test6 = "123abc";
// 	printf("Test 6: \"%s\"\n", test6);
// 	printf("  atoi:    %d\n", atoi(test6));
// 	printf("  ft_atoi: %d\n\n", ft_atoi(test6));
// 	const char *test7 = "+";
// 	printf("Test 7: \"%s\"\n", test7);
// 	printf("  atoi:    %d\n", atoi(test7));
// 	printf("  ft_atoi: %d\n\n", ft_atoi(test7));
// 	const char *test8 = "\t\n\r\v\f 56";
// 	printf("Test 8: \"%s\"\n", test8);
// 	printf("  atoi:    %d\n", atoi(test8));
// 	printf("  ft_atoi: %d\n\n", ft_atoi(test8));
// 	const char *test9 = "";
// 	printf("Test 9: \"%s\"\n", test9);
// 	printf("  atoi:    %d\n", atoi(test9));
// 	printf("  ft_atoi: %d\n\n", ft_atoi(test9));
// 	const char *test10 = "--42";
// 	printf("Test 10: \"%s\"\n", test10);
// 	printf("  atoi:    %d\n", atoi(test10));
// 	printf("  ft_atoi: %d\n\n", ft_atoi(test10));
// 	return (0);
// }