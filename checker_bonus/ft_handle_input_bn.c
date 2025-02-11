/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_handle_input_bn.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarhoun <mbarhoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 16:04:24 by mbarhoun          #+#    #+#             */
/*   Updated: 2025/02/11 10:20:49 by mbarhoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bn.h"
#include <stdio.h>

static int	ft_check_sign(char **sl_argv)
{
	t_sign	t_var;

	t_var.w_i = -1;
	while (sl_argv[++t_var.w_i])
	{
		t_var.sg_flags = 0;
		t_var.c_i = -1;
		t_var.d_flags = 0;
		while (sl_argv[t_var.w_i][++t_var.c_i])
		{
			if (ft_sign(sl_argv[t_var.w_i][t_var.c_i]))
			{
				if (t_var.c_i > 0)
					t_var.sg_flags++;
				t_var.sg_flags++;
			}
			else if (!ft_isdigit(sl_argv[t_var.w_i][t_var.c_i]))
				return (1);
			if (ft_isdigit(sl_argv[t_var.w_i][t_var.c_i]))
				t_var.d_flags++;
		}
		if (t_var.sg_flags > 1 || !t_var.d_flags)
			return (1);
	}
	return (0);
}

static void	ft_double_sort(int **num_argv, char **str_argv, int c_word)
{
	t_scan	t_var;

	t_var.n_i = 0;
	t_var.flag = 1;
	t_var.f_loop = c_word - 1;
	while (t_var.f_loop--)
	{
		t_var.s_loop = c_word - t_var.n_i - 1;
		t_var.s_n_i = t_var.n_i + 1;
		while (t_var.s_loop--)
		{
			if (*num_argv[t_var.n_i] == *num_argv[t_var.s_n_i])
				ft_error(0, num_argv, str_argv);
			t_var.s_n_i++;
		}
		if (*num_argv[t_var.n_i] < *num_argv[t_var.n_i + 1])
			t_var.flag++;
		t_var.n_i++;
	}
	if (t_var.flag == c_word)
		ft_error(1, num_argv, str_argv);
}

static int	**ft_cvnumber(char **str_argv)
{
	t_cvnb	t_var;

	t_var.i = -1;
	t_var.c_word = ft_wrdlen(str_argv);
	t_var.num_argv = (int **)malloc(sizeof(int *) * (t_var.c_word + 1));
	if (!t_var.num_argv)
		return (ft_free_char_dbp(&str_argv), NULL);
	while (str_argv[++t_var.i])
	{
		t_var.v_atoi = ft_atoi(str_argv[t_var.i]);
		t_var.num_argv[t_var.i] = NULL;
		if (t_var.v_atoi > 2147483647 || t_var.v_atoi < -2147483648)
			ft_error(0, t_var.num_argv, str_argv);
		t_var.num_argv[t_var.i] = (int *)malloc(sizeof(int));
		if (!t_var.num_argv[t_var.i])
		{
			ft_free_char_dbp(&str_argv);
			return (ft_free_int_dbp(&t_var.num_argv), NULL);
		}
		*t_var.num_argv[t_var.i] = t_var.v_atoi;
	}
	t_var.num_argv[t_var.i] = NULL;
	ft_double_sort(t_var.num_argv, str_argv, t_var.c_word);
	return (t_var.num_argv);
}

static char	*ft_join_argv(int argc, char **argv)
{
	int		i;
	char	*org_str;
	char	*tmp;

	i = 1;
	org_str = NULL;
	while (argc--)
	{
		tmp = ft_strdup(org_str);
		ft_free(&org_str);
		org_str = ft_strjoin(tmp, argv[i]);
		ft_free(&tmp);
		i++;
	}
	return (org_str);
}

int	**ft_input_argv(int argc, char **argv)
{
	t_inpt	t_var;

	t_var.spl_argv = NULL;
	t_var.num_argv = NULL;
	t_var.i = -1;
	while (argv[++t_var.i])
	{
		t_var.v = 0;
		if (argv[t_var.i][0] == '\0')
			ft_error(0, NULL, NULL);
		while (argv[t_var.i][t_var.v] == ' ')
			t_var.v++;
		if ((int)ft_strlen(argv[t_var.i]) == t_var.v)
			ft_error(0, NULL, NULL);
	}
	t_var.totl_argv = ft_join_argv(argc, argv);
	t_var.spl_argv = ft_split(t_var.totl_argv, ' ');
	ft_free(&t_var.totl_argv);
	if (ft_check_sign(t_var.spl_argv))
		ft_error(0, NULL, t_var.spl_argv);
	t_var.num_argv = ft_cvnumber(t_var.spl_argv);
	ft_free_char_dbp(&t_var.spl_argv);
	return (t_var.num_argv);
}
