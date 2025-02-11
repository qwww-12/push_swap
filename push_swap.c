/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarhoun <mbarhoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 14:46:16 by mbarhoun          #+#    #+#             */
/*   Updated: 2025/02/10 18:20:37 by mbarhoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	int		**num_argv;
	int		s_loop;
	t_list	*stack_a;
	t_list	*stack_b;

	num_argv = NULL;
	if (argc > 1)
		num_argv = ft_input_argv(argc, argv);
	stack_a = ft_linked_list(num_argv);
	if (!stack_a)
		return (ft_free_int_dbp(&num_argv), 0);
	ft_free_int_dbp(&num_argv);
	if (ft_lstsize(stack_a) == 3 || ft_lstsize(stack_a) == 2)
		ft_call_sort(&stack_a, ft_lstsize(stack_a));
	stack_b = ft_range(&stack_a);
	s_loop = ft_lstsize(stack_b);
	while (s_loop--)
	{
		ft_sort_fn(&stack_a, &stack_b);
		ft_target(&stack_a, &stack_b);
	}
	ft_sort_fnlst(&stack_a);
	ft_lstclear(&stack_a);
	return (0);
}
