/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_edit.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarhoun <mbarhoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 12:14:49 by mbarhoun          #+#    #+#             */
/*   Updated: 2025/02/02 13:06:00 by mbarhoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*ft_linked_list(int **num_argv)
{
	t_list	*stack_a;
	t_list	*crt_node;
	t_list	*link;
	int		i;

	if (!num_argv)
		return (NULL);
	i = 0;
	stack_a = ft_lstnew(*num_argv[i]);
	if (!stack_a)
		return (NULL);
	link = stack_a;
	while (num_argv[++i])
	{
		crt_node = ft_lstnew(*num_argv[i]);
		if (!crt_node)
		{
			ft_lstclear(&stack_a);
			return (NULL);
		}
		link->next = crt_node;
		link = crt_node;
	}
	return (stack_a);
}
