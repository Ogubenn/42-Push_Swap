/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogdurkan <ogdurkan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 18:26:01 by ogdurkan          #+#    #+#             */
/*   Updated: 2023/08/01 18:26:03 by ogdurkan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *s, int c)
{
	int		lastletter;
	int		counter;
	char	letter;

	counter = 0;
	letter = (unsigned char)c;
	lastletter = -1;
	while (s[counter] != '\0')
	{
		if (s[counter] == letter)
			lastletter = counter;
		counter++;
	}
	if (lastletter != -1)
		return ((char *)&s[lastletter]);
	if (c == '\0')
		return ((char *)&s[counter]);
	return (0);
}
