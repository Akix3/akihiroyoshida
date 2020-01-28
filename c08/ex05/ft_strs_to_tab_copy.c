/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab_mine.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayoshida <ayoshida@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/27 20:38:17 by ayoshida          #+#    #+#             */
/*   Updated: 2020/01/28 12:39:56 by ayoshida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int	count(char *src)
{
	int i;

	i = 0;
	while (src[i])
		i++;
	return (i);
}

char	*ft_copy(char *source)
{
	int		i;
	char	*destination;

	i = 0;
	destination = (char *)malloc(sizeof(char) * count(source) + 1);
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
		return (dest);
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



void	put_number(int number)
{
	char i;

	if (number != 0)
	{
		i = number % 10 + '0';
		number /= 10;
		put_number(number);
		write(1, &i, 1);
	}
}

void	put_string(char *s)
{
	int iii;

	iii = 0;
	while (s[iii])
		iii++;
	write(1, s, iii);
}

void	ft_show_tab(struct s_stock_str *par)
{
	int ii;

	ii = 0;
	while (par[ii].str)
	{
		put_string(par[ii].str);
		write(1, "\n", 1);
		put_number(par[ii].size);
		write(1, "\n", 1);
		put_string(par[ii].copy);
		write(1, "\n", 1);
		ii++;
	}
}

int	main(int argc, char *argv[])
{
	ft_show_tab(ft_strs_to_tab(argc, argv));
	return (0);
}
