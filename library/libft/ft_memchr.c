/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogdurkan <ogdurkan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 18:23:29 by ogdurkan          #+#    #+#             */
/*   Updated: 2023/08/01 18:23:32 by ogdurkan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	letter;
	unsigned char	*str;
	size_t			counter;

	counter = 0;
	letter = (unsigned char)c;
	str = (unsigned char *)s;
	while (counter < n)
	{
		if (str[counter] == letter)
			return ((void *)(&str[counter]));
		counter++;
	}
	return (0);
}
