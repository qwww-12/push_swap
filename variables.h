/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   variables.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarhoun <mbarhoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 09:46:57 by mbarhoun          #+#    #+#             */
/*   Updated: 2025/02/09 10:48:27 by mbarhoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VARIABLES_H
# define VARIABLES_H

typedef struct s_sign
{
	int	w_i;
	int	c_i;
	int	sg_flags;
	int	d_flags;
}	t_sign;

typedef struct s_scan
{
	int	n_i;
	int	s_n_i;
	int	flag;
	int	s_loop;
	int	f_loop;
}	t_scan;

typedef struct s_cvnb
{
	int		**num_argv;
	int		i;
	int		c_word;
	long	v_atoi;
}	t_cvnb;

#endif