/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayoshida <ayoshida@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/27 16:35:48 by ayoshida          #+#    #+#             */
/*   Updated: 2020/01/28 11:29:24 by ayoshida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include "ft_stock_str.h"

int	count(char *source)
{
	int n;

	n = 0;
	while (source[n])
		n++;
	return (n);
}

char	*str_copy(char *source2)
{
	char	*dest;
	int		n2;

	n2 = count(source2);
	dest = (char *)malloc(sizeof(char) * n2 + 1);

	n2 = 0;
	while (source2[n2])
	{
		dest[n2] = source2[n2];
		n2++;
	}
	dest[n2] = '\0';
	return (dest);
}

struct	s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int i;

	i = 0;
	t_stock_str *ans;
	ans = (t_stock_str *)malloc(sizeof(t_stock_str) * (ac + 1));
	while (ac > i)
	{
		ans[i].size = count(av[i]);
		ans[i].str = av[i];
		ans[i].copy = str_copy(av[i]);
		i++;
	}
	ans[i].str = 0;
	return (ans);
}

// int	main(int argc, char *argv[])
// {
// 	t_stock_str *p;
// 	int i;

// 	i = 0;
// 	p = ft_strs_to_tab(argc, argv);
// 	while (p[i].str != 0)
// 	{
// 		printf("%d\t", p[i].size);
// 		printf("%s\t", p[i].str);
// 		printf("%s\n", p[i].copy);
// 		i++;
// 	}
// 	return (0);
// }

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
