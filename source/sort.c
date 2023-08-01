/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogdurkan <ogdurkan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 18:19:51 by ogdurkan          #+#    #+#             */
/*   Updated: 2023/08/01 18:19:53 by ogdurkan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort(t_stack stack)
{
	int		len;

	len = size(*stack.list_a);
	if (is_sorted(stack))
		return ;
	if (len <= 5)
		predict_sort(stack);
	else
		complex_sort(stack);
}
