/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomandra <tomandra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 16:55:00 by tomandra          #+#    #+#             */
/*   Updated: 2025/04/26 19:36:41 by tomandra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned int	i;
	unsigned char	*d;
	unsigned char	*s;

	s = (unsigned char *)src;
	d = dest;
	i = 0;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}
// int	main(void)
// {
// 	int my_source_array[5] = {10, 20, 30, 40, 50};
// 	int my_dest_array[5];

// 	int real_source_array[5] = {10, 20, 30, 40, 50};
// 	int real_dest_array[5];

// 	// My memcpy function
// 	printf("\n---//My memcpy//---\n");
// 	printf("Source array: ");
// 	for (int i = 0; i < 5; i++)
// 		printf("%d ", my_source_array[i]);
// 	printf("\n");

// 	ft_memcpy(my_dest_array, my_source_array, sizeof(my_source_array));

// 	printf("Destination array: ");
// 	for (int i = 0; i < 5; i++)
// 		printf("%d ", my_dest_array[i]);
// 	printf("\n");

// 	// Original memcpy function
// 	printf("\n---//Original memcpy//---\n");
// 	printf("Source array: ");
// 	for (int i = 0; i < 5; i++)
// 		printf("%d ", real_source_array[i]);
// 	printf("\n");

// 	memcpy(real_dest_array, real_source_array, sizeof(real_source_array));

// 	printf("Destination array: ");
// 	for (int i = 0; i < 5; i++)
// 		printf("%d ", real_dest_array[i]);
// 	printf("\n\n");

// 	return (0);
// }