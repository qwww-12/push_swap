/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_targets.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarhoun <mbarhoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 13:09:16 by mbarhoun          #+#    #+#             */
/*   Updated: 2025/02/06 20:11:15 by mbarhoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	ft_min_target(t_list **stack_a, t_list *stack_b)
{
	t_list	*stack_tmp;
	int		min;

	stack_tmp = *stack_a;
	min = (*stack_a)->data;
	stack_b->target = stack_tmp;
	while (stack_tmp)
	{
		if (min > stack_tmp->data)
		{
			min = stack_tmp->data;
			stack_b->target = stack_tmp;
		}
		stack_tmp = stack_tmp->next;
	}
}

static void	ft_link_target(t_list **stack_a, t_list *stack_b)
{
	t_list	*stack_tmp;
	int		flag;

	stack_tmp = *stack_a;
	stack_b->target = NULL;
	flag = 1;
	while (stack_tmp)
	{
		if (stack_tmp->data > stack_b->data)
		{
			if (!flag && stack_b->target->data > stack_tmp->data)
				stack_b->target = stack_tmp;
			if (flag)
			{
				stack_b->target = stack_tmp;
				flag--;
			}
		}
		stack_tmp = stack_tmp->next;
	}
	if (!stack_b->target)
		ft_min_target(stack_a, stack_b);
}

void	ft_target(t_list **stack_a, t_list **stack_b)
{
	t_list	*stack_tmpb;
	int		size_b;

	stack_tmpb = *stack_b;
	size_b = ft_lstsize(*stack_b);
	while (size_b--)
	{
		ft_link_target(stack_a, stack_tmpb);
		stack_tmpb = stack_tmpb->next;
	}
	ft_index(*stack_a, *stack_b);
	ft_cost(*stack_a, *stack_b);
}
