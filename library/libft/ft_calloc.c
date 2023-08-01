/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogdurkan <ogdurkan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 18:21:33 by ogdurkan          #+#    #+#             */
/*   Updated: 2023/08/01 18:32:27 by ogdurkan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;
	size_t	length;

	length = count * size;
	ptr = (void *)malloc(length);
	if (ptr != NULL)
		ft_bzero(ptr, length);
	else
		return (NULL);
	return (ptr);
}
