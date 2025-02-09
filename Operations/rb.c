/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarhoun <mbarhoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 15:19:10 by mbarhoun          #+#    #+#             */
/*   Updated: 2025/02/03 11:47:16 by mbarhoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rb(t_list **stack_b, int flg)
{
	t_list	*last;
	t_list	*first;

	if (!stack_b || !*stack_b || !(*stack_b)->next)
		return ;
	last = ft_lstlast(*stack_b);
	first = *stack_b;
	*stack_b = (*stack_b)->next;
	last->next = first;
	first->next = NULL;
	if (flg)
		ft_putstr_fd("rb\n", 1);
}
