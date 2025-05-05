/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomandra <tomandra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 13:53:52 by tomandra          #+#    #+#             */
/*   Updated: 2025/05/03 18:06:00 by tomandra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*str;
	size_t	total_size;

	if (!nmemb || !size)
		return (str = malloc(0));
	if (size != 0 && nmemb >= (size_t)-1 / size)
		return (NULL);
	total_size = nmemb * size;
	str = malloc(total_size);
	if (!str)
		return (NULL);
	ft_bzero(str, total_size);
	return (str);
}

// int	main(void)
// {
// 	int *my_array;
// 	int *real_array;
// 	int num = 5;
// 	int size = sizeof(int);

// 	// My Calloc
// 	my_array = ft_calloc(num, size);

// 	if (my_array)
// 	{
// 		printf("\nft_calloc: ");
// 		int i = 0;
// 		while (i < num)
// 		{
// 			printf("%d ", my_array[i]);
// 			i++;
// 		}
// 		printf("\n\n");
// 		free(my_array);
// 	}
// 	else
// 		printf("Failed to allocate memory.\n\n");
// 	return (0);
// }