/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   controller.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogdurkan <ogdurkan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 18:17:00 by ogdurkan          #+#    #+#             */
/*   Updated: 2023/08/01 18:17:08 by ogdurkan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../source/push_swap.h"

static int	contains(int num, char **argv, int i)
{
	i++;
	while (argv[i])
	{
		if (ft_atoi(argv[i]) == num)
			return (1);
		i++;
	}
	return (0);
}

static int	isnum(char *num)
{
	int	i;

	i = 0;
	if (num[0] == '-')
		i++;
	while (num[i])
	{
		if (!ft_isdigit(num[i]))
			return (0);
		i++;
	}
	return (1);
}

void	controller(int argc, char **argv)
{
	int		i;
	long	tmp;
	char	**args;

	i = 0;
	if (argc == 2)
		args = ft_split(argv[1], ' ');
	else
	{
		i = 1;
		args = argv;
	}
	while (args[i])
	{
		tmp = ft_atoi(args[i]);
		if (!isnum(args[i]))
			error("Error");
		if (contains(tmp, args, i))
			error("Error");
		if (tmp < -2147483648 || tmp > 2147483647)
			error("Error");
		i++;
	}
	if (argc == 2)
		free_all(args);
}
