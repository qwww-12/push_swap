/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarhoun <mbarhoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 14:44:10 by mbarhoun          #+#    #+#             */
/*   Updated: 2025/02/11 09:48:35 by mbarhoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "./libft/libft.h"
# include "variables.h"
# include <stdbool.h>

// ========= h1_tools.c =========

void	ft_sort_tw(t_list **stack_a);
void	ft_sort_th(t_list **stack_a);
void	ft_call_sort(t_list **stack_a, int size);
void	ft_error(bool err, int **num_argv, char **str_argv);
int		ft_sign(int c);

// ========== h2_tools.c ==========

void	ft_index(t_list *stack_a, t_list *stack_b);
void	ft_cost(t_list *stack_a, t_list *stack_b);
int		ft_wrdlen(char **str);

// ========== ft_handle_input.c ==========

int		**ft_input_argv(int argc, char **argv);

// ========== ft_list_edit.c ==========

t_list	*ft_linked_list(int **num_argv);

// ========== ft_push_b.c ==========

t_list	*ft_range(t_list **stack_a);

// ========== ft_targets.c ==========

void	ft_target(t_list **stack_a, t_list **stack_b);

// ========== ft_sort_fn.c ==========

void	ft_sort_fn(t_list **stack_a, t_list **stack_b);

// ========== ft_sort_last.c ===========

void	ft_sort_fnlst(t_list **stack_a);

// ========== ft_memleaks.c ==========

void	ft_free_int_dbp(int ***tab);
void	ft_free_char_dbp(char ***str);
void	ft_free(char **ptr);

// ========= operation ==========

void	pb(t_list **stack_a, t_list **stack_b);
void	rb(t_list **stack_b, int flg);
void	rrb(t_list **stack_b, int flg);
void	pa(t_list **stack_a, t_list **stack_b);
void	ra(t_list **stack_a, int flg);
void	sa(t_list **stack_a);
void	rra(t_list **stack_a, int flg);
void	rr(t_list **stack_a, t_list **stack_b);
void	rrr(t_list **stack_a, t_list **stack_b);

#endif