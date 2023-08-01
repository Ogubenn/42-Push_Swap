/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogdurkan <ogdurkan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 18:25:02 by ogdurkan          #+#    #+#             */
/*   Updated: 2023/08/01 18:25:05 by ogdurkan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	length;
	char	*result;

	length = ft_strlen((char *)s1);
	result = malloc(sizeof(char) * (length + 1));
	if (result == NULL)
		return (NULL);
	ft_memcpy(result, s1, length);
	result[length] = '\0';
	return (result);
}
