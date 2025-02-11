/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   variables_bn.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarhoun <mbarhoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 09:46:57 by mbarhoun          #+#    #+#             */
/*   Updated: 2025/02/11 09:59:04 by mbarhoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VARIABLES_BN_H
# define VARIABLES_BN_H

typedef struct s_inpt
{
	char	*totl_argv;
	char	**spl_argv;
	int		**num_argv;
	int		i;
	int		v;
	int		sp_flag;
}	t_inpt;

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