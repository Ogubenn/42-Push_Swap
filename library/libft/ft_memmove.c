/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogdurkan <ogdurkan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 18:23:46 by ogdurkan          #+#    #+#             */
/*   Updated: 2023/08/01 18:23:48 by ogdurkan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t			i;
	unsigned char	*dst_new;
	unsigned char	*src_new;

	if ((dst == NULL) && (src == NULL))
		return (NULL);
	dst_new = (unsigned char *)dst;
	src_new = (unsigned char *)src;
	i = 1;
	if (src_new < dst_new)
	{
		while (i <= len)
		{
			dst_new[len - i] = src_new[len - i];
			i++;
		}
	}
	else
		ft_memcpy(dst_new, src_new, len);
	return (dst);
}
