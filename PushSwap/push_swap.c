/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomandra <tomandra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/26 17:35:15 by tomandra          #+#    #+#             */
/*   Updated: 2025/10/26 19:03:08 by tomandra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

int	initialize_stack(int argc, char **argv, t_stack **stack_a)
{
	char	**str;
	int		size;

	if (argc < 2)
		return (0);
	str = ft_string_parse(argv);
	ft_parsing(str);
	ft_fill_stack(str, stack_a);
	free_arr(str);
	size = ft_stacksize(*stack_a);
	ft_index_stack(*stack_a, size);
	return (size);
}

int	main(int argc, char **argv)
{
	t_stack	*stack_a;
	t_stack	*stack_b;
	int		size;

	stack_a = NULL;
	stack_b = NULL;
	size = initialize_stack(argc, argv, &stack_a);
	if (size == 0)
		return (0);
	if (ft_is_sorted(stack_a))
	{
		ft_free_stack(&stack_a);
		return (0);
	}
	if (size == 2)
		ft_sort_two(&stack_a);
	else if (size == 3)
		ft_sort_three(&stack_a);
	else if (size == 4 || size == 5)
		ft_sort_five(&stack_a, &stack_b);
	else
		ft_radix_sort(&stack_a, &stack_b);
	ft_free_stack(&stack_a);
	ft_free_stack(&stack_b);
	return (0);
}
