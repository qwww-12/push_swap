/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_bn.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarhoun <mbarhoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 12:42:22 by mbarhoun          #+#    #+#             */
/*   Updated: 2025/02/11 09:54:43 by mbarhoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_BN_H
# define PUSH_SWAP_BN_H

# include "../libft/libft.h"
# include "./get_next_line/get_next_line.h"
# include "variables_bn.h"
# include <stdbool.h>

// ========== ft_handle_input_bn.c ==========

int	**ft_input_argv(int argc, char **argv);

// ========== ft_list_edit_bn.c ==========

t_list	*ft_linked_list(int **num_argv);

// ========== h1_tools_bn.c ==========

void	ft_error(bool err, int **num_argv, char **str_argv);
int		ft_sign(int c);
int		ft_wrdlen(char **str);

// ========== Opeartions ==========

void	pa(t_list **stack_a, t_list **stack_b);
void	pb(t_list **stack_a, t_list **stack_b);
void	ra(t_list **stack_a);
void	rb(t_list **stack_b);
void	rr(t_list **stack_a, t_list **stack_b);
void	rra(t_list **stack_a);
void	rrb(t_list **stack_b);
void	rrr(t_list **stack_a, t_list **stack_b);
void	sa(t_list **stack_a);

// ========== ft_memleaks_bn.c ==========

void	ft_free_int_dbp(int ***tab);
void	ft_free_char_dbp(char ***ptr);
void	ft_free(char **ptr);

// ========== ft_ap_mv_sort_bn.c ==========

void	ft_read_move(t_list **stack_a);

// ========== get_next_line ==========

char	*get_next_line(int fd);

#endif