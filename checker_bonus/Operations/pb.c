/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarhoun <mbarhoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 15:19:01 by mbarhoun          #+#    #+#             */
/*   Updated: 2025/02/10 14:14:44 by mbarhoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap_bn.h"

void	pb(t_list **stack_a, t_list **stack_b)
{
	t_list	*stack_tmp;

	if (!stack_a || !*stack_a)
		return ;
	stack_tmp = *stack_a;
	*stack_a = (*stack_a)->next;
	stack_tmp->next = NULL;
	ft_lstadd_front(stack_b, stack_tmp);
}
