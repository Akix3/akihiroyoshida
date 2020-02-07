/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power_copy.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoshida <yoshida@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/22 20:14:56 by ayoshida          #+#    #+#             */
/*   Updated: 2020/02/01 22:07:14 by yoshida          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int result;

	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	else if (power == 1)
		return (nb);
	result = nb;
	while (power >= 2)
	{
		result *= nb;
		power--;
	}
	return (result);
}

int	main(void)
{
	printf("%d", ft_iterative_power(19, 2));
	return (0);
}
