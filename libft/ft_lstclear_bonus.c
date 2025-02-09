/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarhoun <mbarhoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 12:31:05 by mbarhoun          #+#    #+#             */
/*   Updated: 2025/02/02 12:23:15 by mbarhoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst)
{
	t_list	*nxt;

	if (!lst)
		return ;
	while (*lst)
	{
		nxt = (*lst)->next;
		free(*lst);
		*lst = nxt;
	}
}
