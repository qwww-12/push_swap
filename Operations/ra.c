/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ra.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarhoun <mbarhoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 15:19:06 by mbarhoun          #+#    #+#             */
/*   Updated: 2025/02/06 10:34:40 by mbarhoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ra(t_list **stack_a, int flg)
{
	t_list	*last;
	t_list	*first;

	if (!stack_a || !*stack_a || !(*stack_a)->next)
		return ;
	last = ft_lstlast(*stack_a);
	first = *stack_a;
	*stack_a = (*stack_a)->next;
	last->next = first;
	first->next = NULL;
	if (flg)
		ft_putstr_fd("ra\n", 1);
}
