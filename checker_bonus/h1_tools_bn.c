/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   h1_tools.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarhoun <mbarhoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 14:58:22 by mbarhoun          #+#    #+#             */
/*   Updated: 2025/02/10 13:00:53 by mbarhoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bn.h"

void	ft_error(bool err, int **num_argv, char **str_argv)
{
	if (!err)
		ft_putstr_fd("Error!\n", 2);
	ft_free_int_dbp(&num_argv);
	ft_free_char_dbp(&str_argv);
	exit (!err);
}

int	ft_sign(int c)
{
	return (c == '-' || c == '+');
}
