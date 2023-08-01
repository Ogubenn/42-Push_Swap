/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogdurkan <ogdurkan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 18:24:39 by ogdurkan          #+#    #+#             */
/*   Updated: 2023/08/01 18:24:40 by ogdurkan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (n >= 0 && n <= 9)
		ft_putchar_fd((n + 48), fd);
	else if (n < 0)
	{
		ft_putchar_fd('-', fd);
		if (n == -2147483648)
		{
			n = -147483648;
			ft_putchar_fd('2', fd);
		}
		n = -n;
		ft_putnbr_fd(n, fd);
	}
	else
	{
		ft_putnbr_fd((n / 10), fd);
		ft_putnbr_fd((n % 10), fd);
	}
}
