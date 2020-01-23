/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayoshida <ayoshida@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/23 14:55:26 by ayoshida          #+#    #+#             */
/*   Updated: 2020/01/23 15:28:31 by ayoshida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char *argv[])
{
	int c1;
	int n;
	char cmp;
	char copy[n];

	cmp = 0;
	n = 0;
	while (argv[c1] <= 127)
	{
		c1 = 0;
		while (argv[c1] != cmp && argv[c1] != '\0')
		{
			c1++;
		}
		if(argv[c1] == cmp)
		{
			copy[n] = argv[c1];
			n++;
		}
		cmp++;
	}
}