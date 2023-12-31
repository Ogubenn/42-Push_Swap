/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_func.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogdurkan <ogdurkan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 18:17:31 by ogdurkan          #+#    #+#             */
/*   Updated: 2023/08/01 18:17:34 by ogdurkan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../source/push_swap.h"

t_list	*create(int value)
{
	t_list	*item;

	item = (t_list *)malloc(sizeof(t_list) + 1);
	item->value = value;
	item->next = NULL;
	item->index = -1;
	return (item);
}

t_list	*end(t_list	*list)
{
	t_list	*tmp;

	tmp = list;
	while (tmp->next)
	{
		tmp = tmp->next;
		if (tmp->next == NULL)
			break ;
	}
	return (tmp);
}

size_t	size(t_list *list)
{
	size_t	i;
	t_list	*tmp;

	tmp = list;
	i = 0;
	while (tmp)
	{
		tmp = tmp->next;
		i++;
	}
	return (i);
}

t_list	*get(t_list	*list, int index)
{
	t_list	*tmp;

	tmp = list;
	while (tmp->next && index > 0)
	{
		tmp = tmp->next;
		if (tmp->next == NULL)
			break ;
		index--;
	}
	return (tmp);
}

t_list	*min_with_not_index(t_list *list)
{
	t_list	*min;

	min = NULL;
	while (list)
	{
		if (!min && list->index == -1)
			min = list;
		if (min && list->value < min->value && list->index == -1)
			min = list;
		list = list->next;
	}
	return (min);
}
