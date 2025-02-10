/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_bn.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarhoun <mbarhoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 12:41:49 by mbarhoun          #+#    #+#             */
/*   Updated: 2025/02/10 17:32:46 by mbarhoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bn.h"

int	main(int argc, char **argv)
{
	int		**num_argv;
	t_list	*stack_a;

	num_argv = NULL;
	if (argc > 1)
		num_argv = ft_input_argv(argc, argv);
	stack_a = ft_linked_list(num_argv);
	if (!stack_a)
		return (1);
	ft_free_int_dbp(&num_argv);
	ft_read_move(&stack_a);
	ft_lstclear(&stack_a);
	return (0);
}
