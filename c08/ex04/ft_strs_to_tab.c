/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayoshida <ayoshida@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/27 16:35:48 by ayoshida          #+#    #+#             */
/*   Updated: 2020/01/27 16:35:50 by ayoshida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
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

int	main(int argc, char *argv[])
{
	t_stock_str *p;
	int i;

	i = 0;
	p = ft_strs_to_tab(argc, argv);
	while (p[i].str != 0)
	{
		printf("%d\t", p[i].size);
		printf("%s\t", p[i].str);
		printf("%s\n", p[i].copy);
		i++;
	}
	return (0);
}
