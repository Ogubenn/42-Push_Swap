/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogdurkan <ogdurkan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 18:25:56 by ogdurkan          #+#    #+#             */
/*   Updated: 2023/08/01 18:25:58 by ogdurkan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	q;

	if (needle[0] == '\0')
		return ((char *)&haystack[0]);
	i = 0;
	while (haystack[i] != '\0' && i < len)
	{
		q = 0;
		while ((haystack[i + q] == needle[q]) && (i + q) < len)
		{
			if (needle[q + 1] == '\0')
				return ((char *)(&haystack[i]));
			q++;
		}
		i++;
	}
	return (0);
}
