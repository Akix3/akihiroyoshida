/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayoshida <ayoshida@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/22 23:02:40 by ayoshida          #+#    #+#             */
/*   Updated: 2020/01/22 23:15:42 by ayoshida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	int n;

	n = 1;
	while (n <= 46340)
	{
		if ((n * n) == nb)
			return (n);
		n++;
	}
	return (0);
}

int	main(void)
{
	printf("%d", ft_sqrt(2147395600));
	return (0);
}