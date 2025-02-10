/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rra.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarhoun <mbarhoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 15:19:12 by mbarhoun          #+#    #+#             */
/*   Updated: 2025/02/10 14:15:03 by mbarhoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap_bn.h"

void	rra(t_list **stack_a)
{
	t_list	*last;
	t_list	*bf_last;

	if (!stack_a || !*stack_a || !(*stack_a)->next)
		return ;
	bf_last = *stack_a;
	while (bf_last->next->next)
		bf_last = bf_last->next;
	last = bf_last->next;
	bf_last->next = NULL;
	last->next = *stack_a;
	*stack_a = last;
}
