/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogdurkan <ogdurkan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 18:22:30 by ogdurkan          #+#    #+#             */
/*   Updated: 2023/08/01 18:22:32 by ogdurkan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	size_t	counter;
	t_list	*temp;

	counter = 0;
	while (lst[counter] != NULL)
	{
		temp = lst[counter];
		lst[counter] = lst[counter]->next;
		del(temp->content);
		free(temp);
	}
}
