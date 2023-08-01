/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogdurkan <ogdurkan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 18:25:46 by ogdurkan          #+#    #+#             */
/*   Updated: 2023/08/01 18:25:48 by ogdurkan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*result;
	size_t	counter;

	if (!s || !f)
		return (0);
	result = (char *)malloc(sizeof(char) * (ft_strlen((char *)s) + 1));
	if (!result)
		return (0);
	counter = 0;
	while (s[counter] != '\0')
	{
		result[counter] = f(counter, s[counter]);
		counter++;
	}
	result[counter] = '\0';
	return (result);
}
