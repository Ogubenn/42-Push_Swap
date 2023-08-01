/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogdurkan <ogdurkan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 18:17:59 by ogdurkan          #+#    #+#             */
/*   Updated: 2023/08/01 18:18:05 by ogdurkan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../source/push_swap.h"

void	swap(t_list *list_a, t_list *list_b, int index_a, int index_b)
{
	t_list	*a;
	t_list	*b;
	t_list	tmp;

	a = get(list_a, index_a);
	b = get(list_b, index_b);
	tmp = *a;
	a->value = b->value;
	a->index = b->index;
	b->index = tmp.index;
	b->value = tmp.value;
	if (list_a != list_b)
	{
		a->next = b->next;
		b->next = tmp.next;
	}
}

void	sa(t_stack stack)
{
	int	len;

	len = size(*stack.list_a);
	if (len >= 2)
	{
		swap(*stack.list_a, *stack.list_a, 0, 1);
		ft_printf("sa\n");
	}
}

void	sb(t_stack stack)
{
	int	len;

	len = size(*stack.list_b);
	if (len >= 2)
	{
		swap(*stack.list_b, *stack.list_b, 0, 1);
		ft_printf("sa\n");
	}
}

void	ss(t_stack stack)
{
	sa(stack);
	sb(stack);
}
