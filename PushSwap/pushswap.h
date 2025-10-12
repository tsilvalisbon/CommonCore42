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

# include "ImprovedLibft/includes/libft.h"

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
int		ft_stacksize(t_stack *lst);
void	ft_stack_add_back(t_stack **stack, t_stack *new);
void	ft_stack_add_front(t_stack **stack, t_stack *new);
t_stack	*ft_stack_new(long value);
char	**ft_string_parse(char **argv);
void	ft_parsing(char **argv);
void	ft_fill_stack(char **str, t_stack **stack);
void	ft_index_stack(t_stack *stack_a, int size);
int		ft_in_range(char **argv);
void	sa(t_stack **a);
void	pa(t_stack **a, t_stack **b);
void	pb(t_stack **a, t_stack **b);
void	ra(t_stack **a);

#endif