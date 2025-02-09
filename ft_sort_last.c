/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_last.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarhoun <mbarhoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 16:06:41 by mbarhoun          #+#    #+#             */
/*   Updated: 2025/02/09 11:22:11 by mbarhoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	ft_continue_sort(t_list **stack_a, int flg, int min)
{
	t_list	*stack_pa;

	stack_pa = (*stack_a);
	while (stack_pa->data != min)
	{
		if (flg)
			rra(stack_a, 1);
		else
			ra(stack_a, 1);
		stack_pa = (*stack_a);
	}
}

void	ft_sort_fnlst(t_list **stack_a)
{
	t_list	*stack_pa;
	int		min;
	int		flg;

	stack_pa = (*stack_a);
	min = stack_pa->data;
	while (stack_pa)
	{
		if (min > stack_pa->data)
			min = stack_pa->data;
		stack_pa = stack_pa->next;
	}
	stack_pa = *stack_a;
	while (stack_pa && stack_pa->data != min)
		stack_pa = stack_pa->next;
	flg = 0;
	if (stack_pa->index > ft_lstsize(*stack_a) / 2)
		flg = 1;
	ft_continue_sort(stack_a, flg, min);
}
