/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomandra <tomandra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/11 17:27:27 by tomandra          #+#    #+#             */
/*   Updated: 2025/10/11 17:27:27 by tomandra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

int	ft_ifspaces(char *str)
{
	int	i;

	i = 0;
	while (str[i] == ' ')
		i++;
	if (str[i] == '\0')
		return (1);
	return (0);
}

void	free_arr(char **argv)
{
	int	i;

	i = 0;
	while (argv[i])
	{
		free(argv[i]);
		i++;
	}
	free(argv);
}

void	ft_free_stack(t_stack **stack)
{
	t_stack	*temp;

	if (!stack || !(*stack))
		return ;
	while (*stack)
	{
		temp = (*stack)->next;
		free(*stack);
		*stack = temp;
	}
	*stack = NULL;
}

int	find_min_pos(t_stack *stack_a)
{
	int		pos;
	int		min_pos;
	int		min;
	t_stack	*temp;

	pos = 0;
	min_pos = 0;
	min = stack_a->sorted_index;
	temp = stack_a;
	while (temp)
	{
		if (temp->sorted_index < min)
		{
			min = temp->sorted_index;
			min_pos = pos;
		}
		pos++;
		temp = temp->next;
	}
	return (min_pos);
}

void	rotate_to_top(t_stack **stack_a, int pos)
{
	int	size;
	int	steps;

	size = ft_stacksize(*stack_a);
	steps = size - pos;
	if (pos <= size / 2)
	{
		while (pos-- > 0)
			ra(stack_a);
	}
	else
		while (steps-- > 0)
			rra(stack_a);
}
