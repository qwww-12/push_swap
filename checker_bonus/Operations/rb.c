/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarhoun <mbarhoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 15:19:10 by mbarhoun          #+#    #+#             */
/*   Updated: 2025/02/10 14:14:53 by mbarhoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap_bn.h"

void	rb(t_list **stack_b)
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
}
