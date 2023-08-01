/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogdurkan <ogdurkan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 18:22:56 by ogdurkan          #+#    #+#             */
/*   Updated: 2023/08/01 18:22:58 by ogdurkan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*result;
	t_list	*elem;

	if (lst == NULL)
		return (NULL);
	result = NULL;
	while (lst != NULL)
	{
		elem = ft_lstnew(f(lst->content));
		if (elem == NULL)
			ft_lstclear(&elem, del);
		else
			ft_lstadd_back(&result, elem);
		lst = lst->next;
	}
	return (result);
}
