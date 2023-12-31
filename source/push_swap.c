/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogdurkan <ogdurkan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 18:19:30 by ogdurkan          #+#    #+#             */
/*   Updated: 2023/08/01 18:19:33 by ogdurkan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	init(char *str)
{
	int		i;
	char	**numbers;
	t_stack	stack;

	stack.list_a = (t_list **)malloc(sizeof(t_list *));
	stack.list_b = (t_list **)malloc(sizeof(t_list *));
	*stack.list_a = NULL;
	*stack.list_b = NULL;
	numbers = ft_split(str, ' ');
	i = 0;
	while (numbers[i])
	{
		push(stack.list_a, create(ft_atoi(numbers[i])));
		i++;
	}
	free_all(numbers);
	return (stack);
}

int	main(int argc, char **argv)
{
	t_stack	stack;
	char	*str;

	if (argc >= 2 && argv[1][0] != '\0')
	{
		controller(argc, argv);
		str = formatter(argc, argv);
		stack = init(str);
		free(str);
		set_index_all(stack);
		sort(stack);
	}
	return (0);
}
