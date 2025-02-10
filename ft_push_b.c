/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_b.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarhoun <mbarhoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 13:12:21 by mbarhoun          #+#    #+#             */
/*   Updated: 2025/02/09 17:48:13 by mbarhoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static t_list	*ft_first_node_pb(t_list *f, int rng)
{
	while (f && f->data >= rng)
		f = f->next;
	return (f);
}

static void	ft_push_ctr(t_list **stack_a, t_list **stack_b, int rng, int cfmin)
{
	t_list	*stack_pa;

	while (ft_lstsize(*stack_a) > 3 && cfmin > 0)
	{
		ft_index(*stack_a, *stack_b);
		stack_pa = ft_first_node_pb(*stack_a, rng);
		while ((*stack_a)->data != stack_pa->data)
		{
			if (stack_pa->index > ft_lstsize(*stack_a) / 2)
				rra(stack_a, 1);
			else
				ra(stack_a, 1);
		}
		pb(stack_a, stack_b);
		cfmin--;
	}
}

static int	ft_count_of_mrng(t_list *stack_a, int rng)
{
	int	count;

	count = 0;
	while (stack_a)
	{
		if (stack_a->data < rng)
			count++;
		stack_a = stack_a->next;
	}
	return (count);
}

static int	ft_calcul_rng(t_list *stack)
{
	int		rng;
	int		size_node;

	rng = 0;
	size_node = 0;
	while (stack)
	{
		rng += stack->data;
		stack = stack->next;
		size_node++;
	}
	return (rng / size_node);
}

t_list	*ft_range(t_list **stack_a)
{
	t_list	*stack_tmpa;
	t_list	*stack_b;
	int		rng;
	int		cof_min;

	stack_tmpa = *stack_a;
	stack_b = NULL;
	rng = ft_calcul_rng(*stack_a);
	cof_min = ft_count_of_mrng(*stack_a, rng);
	ft_push_ctr(stack_a, &stack_b, rng, cof_min);
	while (ft_lstsize(*stack_a) > 3)
		pb(stack_a, &stack_b);
	ft_sort_th(stack_a);
	ft_target(stack_a, &stack_b);
	return (stack_b);
}
