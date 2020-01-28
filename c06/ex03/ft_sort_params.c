/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayoshida <ayoshida@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/23 14:55:26 by ayoshida          #+#    #+#             */
/*   Updated: 2020/01/28 19:16:54 by ayoshida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putarray2(char **c)
{
	int a;
	int b;

	a = 1;
	while (c[a] != '\0')
	{
		b = 0;
		while (c[a][b] != '\0')
		{
			write(1, &c[a][b], 1);
			b++;
		}
		write(1, "\n", 1);
		a++;
	}
}

void	sort_bubble(char **c)
{
	int		i;
	int		j;
	char	*dest;

	i = 1;
	while (c[i + 1] != '\0')
	{
		j = 0;
		while (c[i][j] == c[i + 1][j])
		{
			j++;
			if (c[i][j] == '\0' && c[i + 1][j] == '\0')
				break ;
		}
		if (c[i][j] > c[i + 1][j])
		{
			dest = c[i];
			c[i] = c[i + 1];
			c[i + 1] = dest;
		}
		i++;
	}
}

int		main(int argc, char *argv[])
{
	int i;

	i = 1;
	while (i < argc)
	{
		sort_bubble(argv);
		i++;
	}
	ft_putarray2(argv);
	return (0);
}
