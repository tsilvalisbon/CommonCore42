/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomandra <tomandra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/11 17:28:19 by tomandra          #+#    #+#             */
/*   Updated: 2025/10/11 20:03:09 by tomandra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

int main(int argc, char **argv)
{
	char **str;
	t_stack *a;
	int size;

	if (argc < 2)
		return (0);
	a = NULL;
	str = NULL;
	str = ft_string_parse(argv);
	ft_parsing(str);
	ft_fill_stack(str, &a);
	free_arr(str);
	size = ft_stacksize(a);
	ft_index_stack(a, size);
	t_stack *tmp = a;
	while (tmp)
	{
    printf("value: %d, sorted index: %d\n", tmp->value, tmp->sorted_index);
    tmp = tmp->next;
	}
	ft_free_stack(&a);
}
