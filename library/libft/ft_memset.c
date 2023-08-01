/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogdurkan <ogdurkan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 18:24:22 by ogdurkan          #+#    #+#             */
/*   Updated: 2023/08/01 18:24:24 by ogdurkan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*new_str;
	size_t			i;

	new_str = b;
	i = 0;
	while (len > i)
	{
		new_str[i] = c;
		i++;
	}
	return (b);
}
