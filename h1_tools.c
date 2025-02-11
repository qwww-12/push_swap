/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   h1_tools.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarhoun <mbarhoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 14:58:22 by mbarhoun          #+#    #+#             */
/*   Updated: 2025/02/10 18:18:53 by mbarhoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sort_tw(t_list **stack_a)
{
	int	a;
	int	b;

	a = (*stack_a)->data;
	b = (*stack_a)->next->data;
	if (a > b)
		sa(stack_a);
}

void	ft_sort_th(t_list **stack_a)
{
	int	a;
	int	b;
	int	c;

	a = (*stack_a)->data;
	b = (*stack_a)->next->data;
	c = (*stack_a)->next->next->data;
	if (a > b && a > c && b > c)
	{
		ra(stack_a, 1);
		sa(stack_a);
	}
	else if (a > b && a > c && c > b)
		ra(stack_a, 1);
	else if (a > b && a < c)
		sa(stack_a);
	else if (c < b && c < a && b > a)
		rra(stack_a, 1);
	else if (a < b && a < c && b > c)
	{
		rra(stack_a, 1);
		sa(stack_a);
	}
}

void	ft_call_sort(t_list **stack_a, int size)
{
	if (size == 2)
		ft_sort_tw(stack_a);
	else
		ft_sort_th(stack_a);
	ft_lstclear(stack_a);
	exit (0);
}

void	ft_error(bool err, int **num_argv, char **str_argv)
{
	if (!err)
		ft_putstr_fd("Error\n", 2);
	ft_free_int_dbp(&num_argv);
	ft_free_char_dbp(&str_argv);
	exit (!err);
}

int	ft_sign(int c)
{
	return (c == '-' || c == '+');
}
