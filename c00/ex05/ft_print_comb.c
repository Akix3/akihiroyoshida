/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayoshida <ayoshida@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/16 19:38:56 by ayoshida          #+#    #+#             */
/*   Updated: 2020/01/18 15:44:50 by ayoshida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	char first;
	char second;
	char third;

	first = '0' - 1;
	while (++first <= '7')
	{
		second = first;
		while (++second <= '8')
		{
			third = second;
			while (++third <= '9')
			{
				if (first != '0' || second != '1' || third != '2')
				{
					write(1, ", ", 2);
				}
				write(1, &first, 1);
				write(1, &second, 1);
				write(1, &third, 1);
			}
		}
	}
}
