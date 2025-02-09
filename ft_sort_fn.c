/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_fn.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarhoun <mbarhoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 12:17:59 by mbarhoun          #+#    #+#             */
/*   Updated: 2025/02/07 11:17:27 by mbarhoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	ft_condition(t_list **stack_a, t_list **stack_b, t_list *f)
{
	if (f->index && f->target->index)
	{
		if (!f->flag_r && !f->target->flag_r)
			rr(stack_a, stack_b);
		else if (f->flag_r && f->target->flag_r)
			rrr(stack_a, stack_b);
		else if (!f->flag_r && f->target->flag_r)
		{
			rb(stack_b, 1);
			rra(stack_a, 1);
		}
		else
		{
			rrb(stack_b, 1);
			ra(stack_a, 1);
		}
	}
	else if (f->index && !f->target->index)
	{
		if (!f->flag_r)
			rb(stack_b, 1);
		else 
			rrb(stack_b, 1);
	}
	ft_index(*stack_a, *stack_b);
}

static void	pr_sort(t_list **stack_a, t_list **stack_b, t_list *f, int sz_list)
{
	t_list	*stack_pb;

	while (1)
	{
		stack_pb = *stack_b;
		if (stack_pb->data != f->data)
			ft_condition(stack_a, stack_b, f);
		else if (stack_pb->data == f->data)
		{
			if (stack_pb->target->index)
			{
				if (!stack_pb->target->flag_r)
					ra(stack_a, 1);
				else
					rra(stack_a, 1);
				ft_index(*stack_a, *stack_b);
			}
			if (!stack_pb->target->index)
			{
				pa(stack_a, stack_b);
				return ;
			}
		}
	}
}

static int	ft_cost_min(t_list *stack_b)
{
	int	cost_min;

	cost_min = stack_b->lt_cost;
	while (stack_b)
	{
		if (cost_min > stack_b->lt_cost)
			cost_min = stack_b->lt_cost;
		stack_b = stack_b->next;
	}
	return (cost_min);
}

void	ft_sort_fn(t_list **stack_a, t_list **stack_b)
{
	t_list	*stack_pb;
	int		cost_min;

	stack_pb = *stack_b;
	cost_min = ft_cost_min(*stack_b);
	while (stack_pb && stack_pb->lt_cost != cost_min)
		stack_pb = stack_pb->next;
	pr_sort(stack_a, stack_b, stack_pb, ft_lstsize(*stack_b));
}
