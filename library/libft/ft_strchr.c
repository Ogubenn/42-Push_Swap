/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogdurkan <ogdurkan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 18:24:55 by ogdurkan          #+#    #+#             */
/*   Updated: 2023/08/01 18:24:57 by ogdurkan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	letter;
	size_t	counter;

	letter = (unsigned char)c;
	counter = 0;
	while (s[counter] != '\0')
	{
		if (s[counter] == letter)
			return ((char *)&s[counter]);
		counter++;
	}
	if (c == '\0')
		return ((char *)&s[counter]);
	return (0);
}
