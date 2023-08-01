/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   complex_sort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogdurkan <ogdurkan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 18:19:11 by ogdurkan          #+#    #+#             */
/*   Updated: 2023/08/01 18:33:34 by ogdurkan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	complex_sort(t_stack stack)
{
	t_list	*head_a;
	int		i;
	int		j;
	int		len;
	int		bits;

	i = 0;
	head_a = *stack.list_a;
	len = size(*stack.list_a);
	bits = get_bits(max(*stack.list_a)->index);
	while (i < bits)
	{
		j = 0;
		while (j++ < len)
		{
			head_a = *stack.list_a;
			if (((head_a->index >> i) & 1) == 1)
				ra(stack);
			else
				pb(stack);
		}
		while (size(*stack.list_b) != 0)
			pa(stack);
		i++;
	}
}
