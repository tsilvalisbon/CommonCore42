/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomandra <tomandra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/12 18:44:22 by tomandra          #+#    #+#             */
/*   Updated: 2025/10/26 16:14:21 by tomandra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	pa(t_stack **stack_a, t_stack **stack_b)
{
	t_stack	*node;

	if (!stack_b || !*stack_b)
		return ;
	node = *stack_b;
	*stack_b = node->next;
	if (*stack_b)
		(*stack_b)->previous = NULL;
	node->next = *stack_a;
	if (*stack_a)
		(*stack_a)->previous = node;
	node->previous = NULL;
	*stack_a = node;
	write(1, "pa\n", 3);
}

void	pb(t_stack **stack_a, t_stack **stack_b)
{
	t_stack	*node;

	if (!stack_a || !*stack_a)
		return ;
	node = *stack_a;
	*stack_a = node->next;
	if (*stack_a)
		(*stack_a)->previous = NULL;
	node->next = *stack_b;
	if (*stack_b)
		(*stack_b)->previous = node;
	node->previous = NULL;
	*stack_b = node;
	write(1, "pb\n", 3);
}

void	ra(t_stack **stack_a)
{
	t_stack	*first;
	t_stack	*last;

	if (!stack_a || !*stack_a || !(*stack_a)->next)
		return ;
	first = *stack_a;
	last = *stack_a;
	while (last->next)
		last = last->next;
	*stack_a = first->next;
	(*stack_a)->previous = NULL;
	last->next = first;
	first->previous = last;
	first->next = NULL;
	write(1, "ra\n", 3);
}

void	sa(t_stack **stack_a)
{
	t_stack	*first;
	t_stack	*second;

	if (!stack_a || !*stack_a || !(*stack_a)->next)
		return ;
	first = *stack_a;
	second = first->next;
	first->next = second->next;
	if (second->next)
		second->next->previous = first;
	second->previous = NULL;
	second->next = first;
	first->previous = second;
	*stack_a = second;
	write(1, "sa\n", 3);
}

void	rra(t_stack **stack_a)
{
	t_stack	*first;
	t_stack	*last;

	if (!stack_a || !*stack_a || !(*stack_a)->next)
		return ;
	first = *stack_a;
	last = *stack_a;
	while (last->next)
		last = last->next;
	last->previous->next = NULL;
	last->next = first;
	last->previous = NULL;
	first->previous = last;
	*stack_a = last;
	write(1, "rra\n", 4);
}
