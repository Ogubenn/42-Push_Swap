/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogdurkan <ogdurkan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 18:24:33 by ogdurkan          #+#    #+#             */
/*   Updated: 2023/08/01 18:24:35 by ogdurkan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	size_t	counter;

	counter = 0;
	if (!s)
		return ;
	while (s[counter] != '\0')
	{
		ft_putchar_fd(s[counter], fd);
		counter++;
	}
	ft_putchar_fd('\n', fd);
}
