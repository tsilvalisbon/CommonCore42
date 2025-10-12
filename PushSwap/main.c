/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomandra <tomandra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/11 17:28:19 by tomandra          #+#    #+#             */
/*   Updated: 2025/10/12 20:37:25 by tomandra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

// int main(int argc, char **argv)
// {
// 	char **str;
// 	t_stack *a;
// 	int size;

// 	if (argc < 2)
// 		return (0);
// 	a = NULL;
// 	str = NULL;
// 	str = ft_string_parse(argv);
// 	ft_parsing(str);
// 	ft_fill_stack(str, &a);
// 	free_arr(str);
// 	size = ft_stacksize(a);
// 	ft_index_stack(a, size);
// 	t_stack *tmp = a;
// 	while (tmp)
// 	{
//     printf("value: %d, sorted index: %d\n", tmp->value, tmp->sorted_index);
//     tmp = tmp->next;
// 	}
// 	ft_free_stack(&a);
// }

void	print_stacks(t_stack *a, t_stack *b)
{
	t_stack *tmp_a = a;
	t_stack *tmp_b = b;

	printf("\n--- STACKS ---\n");
	printf("   A\t|\tB\n");
	printf("---------------\n");

	while (tmp_a || tmp_b)
	{
		if (tmp_a)
		{
			printf("%4d", tmp_a->value);
			tmp_a = tmp_a->next;
		}
		else
			printf("    ");

		printf("\t|\t");

		if (tmp_b)
		{
			printf("%4d", tmp_b->value);
			tmp_b = tmp_b->next;
		}

		printf("\n");
	}
	printf("---------------\n\n");
}

int	main(int argc, char **argv)
{
	char **str;
	t_stack *a;
	t_stack *b;
	int size;

	if (argc < 2)
		return (0);

	a = NULL;
	b = NULL;

	str = ft_string_parse(argv);
	ft_parsing(str);
	ft_fill_stack(str, &a);
	free_arr(str);

	size = ft_stacksize(a);
	ft_index_stack(a, size);

	printf("Initial stacks:\n");
	print_stacks(a, b);

	// Test sa (swap top 2 of A)
	printf("Operation: sa\n");
	sa(&a);
	print_stacks(a, b);

	// Simulate pb twice (move top of A to B)
	printf("Operation: pb\n");
	pb(&a, &b);
	print_stacks(a, b);

	printf("Operation: pb\n");
	pb(&a, &b);
	print_stacks(a, b);

	// Test pa (move top of B back to A)
	printf("Operation: pa\n");
	pa(&a, &b);
	print_stacks(a, b);

	// Test ra (rotate A)
	printf("Operation: ra\n");
	ra(&a);
	print_stacks(a, b);

	ft_free_stack(&a);
	ft_free_stack(&b);
	return (0);
}
