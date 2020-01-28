/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayoshida <ayoshida@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/23 13:24:02 by ayoshida          #+#    #+#             */
/*   Updated: 2020/01/28 16:55:16 by ayoshida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char a)
{
	write(1, &a, 1);
}

int		main(int argc, char *argv[])
{
	int c1;
	int c2;

	(void)argc;
	c1 = 1;
	while (argv[c1] != '\0')
	{
		c2 = 0;
		while (argv[c1][c2] != '\0')
		{
			ft_putchar(argv[c1][c2]);
			c2++;
		}
		ft_putchar('\n');
		c1++;
	}
	return (0);
}
