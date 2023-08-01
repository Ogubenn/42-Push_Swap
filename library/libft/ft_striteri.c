/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogdurkan <ogdurkan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 18:25:08 by ogdurkan          #+#    #+#             */
/*   Updated: 2023/08/01 18:25:20 by ogdurkan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	size_t	counter;

	if (!s || !f)
		return ;
	counter = 0;
	while (s[counter] != '\0')
	{
		f(counter, &s[counter]);
		counter++;
	}
}
