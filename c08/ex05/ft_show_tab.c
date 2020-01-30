/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayoshida <ayoshida@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/28 12:49:58 by ayoshida          #+#    #+#             */
/*   Updated: 2020/01/30 15:42:03 by ayoshida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <unistd.h>

void	put_number(int num)
{
	char c;

	if (num != 0)
	{
		c = num % 10 + '0';
		num /= 10;
		put_number(num);
		write(1, &c, 1);
	}
}

void	put_string(char *s)
{
	int i;

	i = 0;
	while (s[i])
		i++;
	write(1, s, i);
}

void	ft_show_tab(struct s_stock_str *par)
{
	int i;

	i = 0;
	while (par[i].str)
	{
		put_string(par[i].str);
		write(1, "\n", 1);
		put_number(par[i].size);
		write(1, "\n", 1);
		put_string(par[i].copy);
		write(1, "\n", 1);
		i++;
	}
}
