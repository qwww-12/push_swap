/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rra.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarhoun <mbarhoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 15:19:12 by mbarhoun          #+#    #+#             */
/*   Updated: 2025/02/03 11:47:48 by mbarhoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rra(t_list **stack_a, int flg)
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
	if (flg)
		ft_putstr_fd("rra\n", 1);
}
