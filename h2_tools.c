/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   h2_tools.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarhoun <mbarhoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 15:59:47 by mbarhoun          #+#    #+#             */
/*   Updated: 2025/02/08 13:21:27 by mbarhoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	ft_ltcost(t_list *stack_b)
{
	while (stack_b)
	{
		stack_b->lt_cost = stack_b->target->cost + stack_b->cost;
		stack_b = stack_b->next;
	}
}

static void	ft_clc_cost(t_list *stack, int sz_list)
{
	stack->cost = sz_list - stack->index;
	stack->flag_r = 1;
}

void	ft_cost(t_list *stack_a, t_list *stack_b)
{
	t_list	*stack_tmpb;
	int		sz_list;

	stack_tmpb = stack_b;
	sz_list = ft_lstsize(stack_a);
	while (stack_a)
	{
		stack_a->cost = stack_a->index;
		stack_a->flag_r = 0;
		if (stack_a->index > sz_list / 2)
			ft_clc_cost(stack_a, sz_list);
		stack_a = stack_a->next;
	}
	sz_list = ft_lstsize(stack_b);
	while (stack_b)
	{
		stack_b->cost = stack_b->index;
		stack_b->flag_r = 0;
		if (stack_b->index > sz_list / 2)
			ft_clc_cost(stack_b, sz_list);
		stack_b = stack_b->next;
	}
	ft_ltcost(stack_tmpb);
}

void	ft_index(t_list *stack_a, t_list *stack_b)
{
	int	index;

	index = 0;
	while (stack_a)
	{
		stack_a->index = index++;
		stack_a = stack_a->next;
	}
	index = 0;
	while (stack_b)
	{
		stack_b->index = index++;
		stack_b = stack_b->next;
	}
}
