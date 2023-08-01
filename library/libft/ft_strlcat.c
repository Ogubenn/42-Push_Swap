/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogdurkan <ogdurkan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 18:25:31 by ogdurkan          #+#    #+#             */
/*   Updated: 2023/08/01 18:25:33 by ogdurkan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	counter;
	size_t	dst_length;
	size_t	src_length;

	dst_length = ft_strlen(dst);
	src_length = ft_strlen((char *)src);
	if (dstsize <= dst_length)
		return (dstsize + src_length);
	counter = 0;
	while (src[counter] != '\0' && dstsize > (dst_length + 1))
	{
		dst[dst_length] = src[counter];
		counter++;
		dst_length++;
	}
	dst[dst_length] = '\0';
	return (dst_length + ft_strlen((char *)(&src[counter])));
}
