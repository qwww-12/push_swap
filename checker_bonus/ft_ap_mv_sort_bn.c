/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ap_mv_sort_bn.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarhoun <mbarhoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 14:02:21 by mbarhoun          #+#    #+#             */
/*   Updated: 2025/02/11 10:03:48 by mbarhoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bn.h"
#include <stdio.h>

static void	ft_check_sort(t_list **stack_a, t_list **stack_b, t_list *stack_pa)
{
	int		s_flag;
	int		la_lst;

	s_flag = 1;
	la_lst = ft_lstsize(*stack_a);
	if (ft_lstsize(*stack_b))
	{
		ft_lstclear(stack_b);
		ft_lstclear(stack_a);
		ft_putstr_fd("KO\n", 1);
		exit (1);
	}
	while (stack_pa->next)
	{
		if (stack_pa->data < stack_pa->next->data)
			s_flag++;
		stack_pa = stack_pa->next;
	}
	if (s_flag == la_lst)
		ft_putstr_fd("OK\n", 1);
	else
		ft_putstr_fd("KO\n", 1);
}

static int	ft_strcmp(const char *s1, const char *s2)
{
	while ((*(unsigned char *)s1 || *(unsigned char *)s2))
		if (*(unsigned char *)s1++ != *(unsigned char *)s2++)
			return (*(unsigned char *)--s1 - *(unsigned char *)--s2);
	return (0);
}

static void	ft_app_sort(t_list **stack_a, t_list **stack_b, char *buffer)
{
	if (!ft_strcmp(buffer, "pa\n"))
		pa(stack_a, stack_b);
	else if (!ft_strcmp(buffer, "pb\n"))
		pb(stack_a, stack_b);
	else if (!ft_strcmp(buffer, "ra\n"))
		ra(stack_a);
	else if (!ft_strcmp(buffer, "rb\n"))
		rb(stack_b);
	else if (!ft_strcmp(buffer, "rr\n"))
		rr(stack_a, stack_b);
	else if (!ft_strcmp(buffer, "rra\n"))
		rra(stack_a);
	else if (!ft_strcmp(buffer, "rrb\n"))
		rrb(stack_b);
	else if (!ft_strcmp(buffer, "rrr\n"))
		rrr(stack_a, stack_b);
	else if (!ft_strcmp(buffer, "sa\n"))
		sa(stack_a);
	else
	{
		ft_lstclear(stack_a);
		ft_lstclear(stack_b);
		ft_free(&buffer);
		ft_error(0, NULL, NULL);
	}
}

void	ft_read_move(t_list **stack_a)
{
	t_list	*stack_b;
	char	*buffer;

	stack_b = NULL;
	buffer = NULL;
	while (1)
	{
		buffer = get_next_line(STDIN_FILENO);
		if (!buffer)
			break ;
		ft_app_sort(stack_a, &stack_b, buffer);
		ft_free(&buffer);
	}
	ft_check_sort(stack_a, &stack_b, *stack_a);
}
