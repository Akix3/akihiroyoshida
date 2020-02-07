/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime_copy.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoshida <yoshida@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/22 23:17:10 by ayoshida          #+#    #+#             */
/*   Updated: 2020/02/01 15:30:26 by yoshida          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb)
{
	int n;

	if (nb <= 1)
		return (0);
	n = (nb - 1);
	while (n > 1)
	{
		if (nb % n == 0)
			return (0);
		n--;
	}
	return (1);
}

int	main(void)
{
	printf("%d", ft_is_prime(1007));
	return (0);
}
