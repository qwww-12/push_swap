/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarhoun <mbarhoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 15:43:41 by mbarhoun          #+#    #+#             */
/*   Updated: 2025/02/02 12:22:45 by mbarhoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(int data)
{
	t_list	*ma;

	ma = (t_list *)malloc(sizeof(t_list));
	if (!ma)
		return (NULL);
	ma->data = data;
	ma->next = NULL;
	return (ma);
}
