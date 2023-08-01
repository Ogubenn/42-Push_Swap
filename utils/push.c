/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogdurkan <ogdurkan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 18:17:39 by ogdurkan          #+#    #+#             */
/*   Updated: 2023/08/01 18:17:41 by ogdurkan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../source/push_swap.h"

void	push(t_list **list, t_list *item)
{
	t_list	*last;

	if (*list)
	{
		last = end(*list);
		last->next = item;
		item->next = NULL;
	}
	else
	{
		*list = item;
		(*list)->next = NULL;
	}
}

void	pa(t_stack stack)
{
	t_list	*item;

	if (*stack.list_b == NULL)
		return ;
	item = *stack.list_b;
	*stack.list_b = item->next;
	item->next = *stack.list_a;
	*stack.list_a = item;
	ft_printf("pa\n");
}

void	pb(t_stack stack)
{
	t_list	*item;

	if (*stack.list_a == NULL)
		return ;
	item = *stack.list_a;
	*stack.list_a = item->next;
	item->next = *stack.list_b;
	*stack.list_b = item;
	ft_printf("pb\n");
}
