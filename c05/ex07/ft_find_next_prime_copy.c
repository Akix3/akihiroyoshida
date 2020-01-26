/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime_copy.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayoshida <ayoshida@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/23 10:43:37 by ayoshida          #+#    #+#             */
/*   Updated: 2020/01/25 23:17:08 by ayoshida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_find_next_prime(int nb)
{
	int n;
	int m;
	unsigned int o;

	if (nb <= 2)
		return (2);
	if (nb > 214748329)
		return (__INT_MAX__);
	n = 2;
	while ((n * n) < nb)
	{
		n++;
	}
	m = 2;
	while (m <= n)
	{
		if (nb % m == 0)
		{
			nb = ft_find_next_prime(nb + 1);
		}
		m++;
	}
	return (nb);
}

int	main(void)
{
	printf("%d", ft_find_next_prime(214748327));
	return (0);
}
