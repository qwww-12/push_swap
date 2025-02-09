/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarhoun <mbarhoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 12:14:40 by mbarhoun          #+#    #+#             */
/*   Updated: 2025/01/22 16:45:56 by mbarhoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	mlen1;
	size_t	mlen2;
	char	*ma;

	if (!s1 || !s2)
	{
		if (!s1 && s2)
			return (ft_strdup(s2));
		if (!s2 && s1)
			return (ft_strdup(s1));
		return (NULL);
	}
	mlen1 = ft_strlen(s1);
	mlen2 = ft_strlen(s2);
	ma = (char *)malloc(sizeof(char) * (mlen1 + mlen2 + 2));
	if (!ma)
		return (NULL);
	ft_memcpy(ma, s1, mlen1);
	ma[mlen1] = ' ';
	ft_memcpy(ma + mlen1 + 1, s2, mlen2);
	ma[mlen1 + mlen2 + 1] = '\0';
	return (ma);
}
