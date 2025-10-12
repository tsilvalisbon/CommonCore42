/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomandra <tomandra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/12 18:44:22 by tomandra          #+#    #+#             */
/*   Updated: 2025/10/12 20:37:42 by tomandra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	pa(t_stack **a, t_stack **b)
{
	t_stack	*node;

	if (!b || !*b)
		return ;
	node = *b;
	*b = node->next;
	if (*b)
		(*b)->previous = NULL;
	node->next = *a;
	if (*a)
		(*a)->previous = node;
	node->previous = NULL;
	*a = node;
}

void	pb(t_stack **a, t_stack **b)
{
	t_stack	*node;

	if (!a || !*a)
		return ;
	node = *a;
	*a = node->next;
	if (*a)
		(*a)->previous = NULL;
	node->next = *b;
	if (*b)
		(*b)->previous = node;
	node->previous = NULL;
	*b = node;
}
