/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogdurkan <ogdurkan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 18:20:16 by ogdurkan          #+#    #+#             */
/*   Updated: 2023/08/01 18:20:28 by ogdurkan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_puts.h"
#include "../ft_printf.h"

int	ft_putnbr(long nbr, t_base base)
{
	static size_t	result;

	result = 0;
	if (nbr < 0 && base.is_substract)
	{
		result++;
		base.is_substract = 0;
		ft_putnbr(4294967296 + nbr, base);
	}
	else if (nbr < 0 && !base.is_substract)
	{
		result++;
		ft_putchar('-');
		ft_putnbr(-nbr, base);
	}
	else if (nbr < base.base_length)
		ft_putchar(base.base[nbr]);
	else
	{
		ft_putnbr(nbr / base.base_length, base);
		ft_putchar(base.base[nbr % base.base_length]);
	}
	result++;
	return (result);
}
