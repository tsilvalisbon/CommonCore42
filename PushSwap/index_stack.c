/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   index_stack.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomandra <tomandra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/11 17:21:21 by tomandra          #+#    #+#             */
/*   Updated: 2025/10/26 15:12:31 by tomandra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	ft_fill_stack(char **str, t_stack **stack)
{
	long	value;
	int		i;

	*stack = NULL;
	i = 0;
	if (!ft_in_range(str))
	{
		free_arr(str);
		ft_putstr_fd("Error\n", 2);
		ft_free_stack(stack);
		exit(1);
	}
	while (str[i])
	{
		value = ft_atol(str[i]);
		ft_stack_add_back(stack, ft_stack_new(value));
		i++;
	}
}

static void	ft_init_index(t_stack *stack_a)
{
	t_stack	*current;

	current = stack_a;
	while (current)
	{
		current->sorted_index = -1;
		current = current->next;
	}
}

void	ft_index_stack(t_stack *stack_a, int size)
{
	t_stack	*current;
	t_stack	*high_node;
	int		max_value;

	ft_init_index(stack_a);
	while (size-- > 0)
	{
		current = stack_a;
		high_node = NULL;
		max_value = INT_MIN;
		while (current)
		{
			if (current->sorted_index == -1 && current->value >= max_value)
			{
				max_value = current->value;
				high_node = current;
			}
			current = current->next;
		}
		if (high_node)
			high_node->sorted_index = size;
	}
}

int	ft_is_sorted(t_stack *stack_a)
{
	t_stack	*current;

	if (!stack_a)
		return (1);
	current = stack_a;
	while (current->next)
	{
		if (current->sorted_index > current->next->sorted_index)
			return (0);
		current = current->next;
	}
	return (1);
}
