/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime_copy.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayoshida <ayoshida@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/23 10:43:37 by ayoshida          #+#    #+#             */
/*   Updated: 2020/01/30 18:13:58 by ayoshida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_find_next_prime(int nb)
{
	unsigned int n;
	int m;

	if (nb <= 2)
		return (2);
	n = 2;
	while ((n * n) < nb)
		n++;
	m = 2;
	while (m <= n)
	{
		if (nb % m == 0)
			nb = ft_find_next_prime(nb + 1);
		m++;
	}
	return (nb);
}

int	main(void)
{
	printf("%d", ft_find_next_prime(2147483646));
	return (0);
}
