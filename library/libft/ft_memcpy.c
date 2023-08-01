/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogdurkan <ogdurkan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 18:23:42 by ogdurkan          #+#    #+#             */
/*   Updated: 2023/08/01 18:23:44 by ogdurkan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*dst_new;
	unsigned char	*src_new;
	size_t			counter;

	if (dst == NULL && src == NULL)
		return (NULL);
	dst_new = (unsigned char *)dst;
	src_new = (unsigned char *)src;
	counter = 0;
	while (counter < n)
	{
		dst_new[counter] = src_new[counter];
		counter++;
	}
	return (dst);
}
