/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayoshida <ayoshida@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/27 20:38:17 by ayoshida          #+#    #+#             */
/*   Updated: 2020/01/30 13:26:09 by ayoshida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>

int					count(char *src)
{
	int i;

	i = 0;
	while (src[i])
		i++;
	return (i);
}

char				*ft_copy(char *source)
{
	int		i;
	char	*destination;

	i = 0;
	destination = (char *)malloc(sizeof(char) * count(source) + 1);
	if (!destination)
		return (0);
	while (source[i])
	{
		destination[i] = source[i];
		i++;
	}
	destination[i] = '\0';
	return (destination);
}

struct	s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*dest;
	int			num;

	dest = (t_stock_str *)malloc(sizeof(t_stock_str) * (ac + 1));
	if (!dest)
		return (0);
	num = 0;
	while (ac > num)
	{
		dest[num].size = count(av[num]);
		dest[num].str = av[num];
		dest[num].copy = ft_copy(av[num]);
		num++;
	}
	dest[num].str = 0;
	return (dest);
}
