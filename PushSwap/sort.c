/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomandra <tomandra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 15:51:51 by tomandra          #+#    #+#             */
/*   Updated: 2025/11/14 15:08:47 by tomandra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	ft_sort_two(t_stack **stack_a)
{
	if ((*stack_a)->sorted_index > (*stack_a)->next->sorted_index)
		sa(stack_a);
}

void	ft_sort_three(t_stack **stack_a)
{
	int	first;
	int	second;
	int	last;

	first = (*stack_a)->sorted_index;
	second = (*stack_a)->next->sorted_index;
	last = (*stack_a)->next->next->sorted_index;
	if (first < second && second < last)
		return ;
	else if (first < second && second > last && first < last)
	{
		sa(stack_a);
		ra(stack_a);
	}
	else if (first > second && second < last && first < last)
		sa(stack_a);
	else if (first < second && second > last && first > last)
		rra(stack_a);
	else if (first > second && first > last && second < last)
		ra(stack_a);
	else if (first > second && second > last)
	{
		ra(stack_a);
		sa(stack_a);
	}
}

void	ft_sort_five(t_stack **stack_a, t_stack **stack_b)
{
	int	min_pos;

	while (ft_stacksize(*stack_a) > 3)
	{
		min_pos = find_min_pos(*stack_a);
		rotate_to_top(stack_a, min_pos);
		pb(stack_a, stack_b);
	}
	ft_sort_three(stack_a);
	while (*stack_b)
		pa(stack_a, stack_b);
}

void	ft_radix_sort(t_stack **stack_a, t_stack **stack_b)
{
	int	bit;
	int	size;
	int	max_bits;
	int	i;

	size = ft_stacksize(*stack_a);
	max_bits = 0;
	while ((size - 1) >> max_bits)
		max_bits++;
	bit = 0;
	while (bit < max_bits)
	{
		i = 0;
		while (i < size)
		{
			if (((*stack_a)->sorted_index >> bit) & 1)
				ra(stack_a);
			else
				pb(stack_a, stack_b);
			i++;
		}
		while (*stack_b)
			pa(stack_a, stack_b);
		bit++;
	}
}
