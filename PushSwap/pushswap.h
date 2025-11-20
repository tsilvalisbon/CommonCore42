/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswap.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomandra <tomandra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 17:46:46 by tomandra          #+#    #+#             */
/*   Updated: 2025/09/30 17:46:46 by tomandra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSHSWAP_H
# define PUSHSWAP_H

# include "Libft/includes/libft.h"

typedef struct s_stack
{
	int				value;
	int				sorted_index;
	struct s_stack	*next;
	struct s_stack	*previous;
}					t_stack;

int		ft_ifspaces(char *str);
void	free_arr(char **argv);
void	ft_free_stack(t_stack **stack);
int		find_min_pos(t_stack *stack_a);
void	rotate_to_top(t_stack **stack_a, int pos);
int		ft_stacksize(t_stack *stack);
void	ft_stack_add_back(t_stack **stack, t_stack *new);
void	ft_stack_add_front(t_stack **stack, t_stack *new);
t_stack	*ft_stack_new(long value);
char	**ft_string_parse(char **argv);
void	ft_parsing(char **argv);
void	ft_fill_stack(char **str, t_stack **stack);
void	ft_index_stack(t_stack *stack_a, int size);
int		ft_is_sorted(t_stack *stack_a);
int		ft_in_range(char **argv);
void	sa(t_stack **stack_a);
void	pa(t_stack **stack_a, t_stack **stack_b);
void	pb(t_stack **stack_a, t_stack **stack_b);
void	ra(t_stack **stack_a);
void	rra(t_stack **stack_a);
void	ft_sort_two(t_stack **stack_a);
void	ft_sort_three(t_stack **stack_a);
void	ft_sort_five(t_stack **stack_a, t_stack **stack_b);
void	ft_radix_sort(t_stack **stack_a, t_stack **stack_b);

#endif