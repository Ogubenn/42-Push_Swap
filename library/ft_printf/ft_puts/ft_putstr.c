/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogdurkan <ogdurkan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 18:20:42 by ogdurkan          #+#    #+#             */
/*   Updated: 2023/08/01 18:20:45 by ogdurkan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_puts.h"

int	ft_putstr(char *str)
{
	size_t	result;

	result = 0;
	if (!str)
		return (ft_putstr("(null)"));
	while (str[result])
	{
		ft_putchar(str[result]);
		result++;
	}
	return (result);
}
