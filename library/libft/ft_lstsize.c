/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogdurkan <ogdurkan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 18:23:22 by ogdurkan          #+#    #+#             */
/*   Updated: 2023/08/01 18:23:25 by ogdurkan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	t_list	*tmp;
	int		counter;

	tmp = lst;
	counter = 0;
	while (tmp != NULL)
	{
		counter++;
		tmp = tmp->next;
	}
	return (counter);
}
