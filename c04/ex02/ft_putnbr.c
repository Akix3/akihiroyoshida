/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayoshida <ayoshida@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/21 22:04:45 by ayoshida          #+#    #+#             */
/*   Updated: 2020/01/21 23:24:33 by ayoshida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_putnbr(int nb)
{
	char a;

	if (nb == -2147483648)
		write(1, "-2147483648", 11);
	if (nb == 0)
		write(1, "0", 1);
	if (nb < 0 && nb != -2147483648)
	{
		write(1, "-", 1);
		nb *= -1;
		ft_putnbr(nb);
	}
	if (nb > 0)
	{
		a = (nb % 10 + '0');
		nb /= 10;
		if (nb != 0)
			ft_putnbr(nb);
		write(1, &a, 1);
	}
}

int main(void)
{
	int n = -12345678;
	ft_putnbr(n);
	return (0);
}
