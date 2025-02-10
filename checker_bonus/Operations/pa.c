/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarhoun <mbarhoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 15:18:58 by mbarhoun          #+#    #+#             */
/*   Updated: 2025/02/10 14:14:39 by mbarhoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap_bn.h"

void	pa(t_list **stack_a, t_list **stack_b)
{
	t_list	*stack_tmpb;

	if (!stack_b || !*stack_b)
		return ;
	stack_tmpb = *stack_b;
	*stack_b = (*stack_b)->next;
	stack_tmpb->next = NULL;
	ft_lstadd_front(stack_a, stack_tmpb);
}
