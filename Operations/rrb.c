/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrb.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarhoun <mbarhoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 15:19:15 by mbarhoun          #+#    #+#             */
/*   Updated: 2025/02/03 11:48:04 by mbarhoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rrb(t_list **stack_b, int flg)
{
	t_list	*bf_last;
	t_list	*last;

	if (!stack_b || !*stack_b || !(*stack_b)->next)
		return ;
	bf_last = *stack_b;
	while (bf_last->next->next)
		bf_last = bf_last->next;
	last = bf_last->next;
	bf_last->next = NULL;
	last->next = *stack_b;
	*stack_b = last;
	if (flg)
		ft_putstr_fd("rrb\n", 1);
}
