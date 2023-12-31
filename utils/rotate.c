/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogdurkan <ogdurkan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 18:17:52 by ogdurkan          #+#    #+#             */
/*   Updated: 2023/08/01 18:17:55 by ogdurkan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../source/push_swap.h"

void	rotate(t_list **list)
{
	t_list	*first;
	t_list	*last;

	if (*list == NULL || (*list)->next == NULL)
		return ;
	first = *list;
	*list = (*list)->next;
	last = *list;
	while (last->next != NULL)
		last = last->next;
	last->next = first;
	first->next = NULL;
}

void	ra(t_stack stack)
{
	rotate(stack.list_a);
	ft_printf("ra\n");
}

void	rb(t_stack stack)
{
	rotate(stack.list_b);
	ft_printf("rb\n");
}

void	rr(t_stack stack)
{
	rotate(stack.list_a);
	rotate(stack.list_b);
}
