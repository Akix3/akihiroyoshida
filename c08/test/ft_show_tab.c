/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayoshida <ayoshida@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/28 12:49:58 by ayoshida          #+#    #+#             */
/*   Updated: 2020/01/28 13:50:52 by ayoshida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"

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
