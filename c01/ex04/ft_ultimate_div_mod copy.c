/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod copy.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayoshida <ayoshida@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/19 18:43:04 by ayoshida          #+#    #+#             */
/*   Updated: 2020/01/19 19:22:10 by ayoshida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int c;

	c = *a;
	*a = *a / *b;
	*b = c % *b;
}

int	main(void)
{
	int x;
	int y;

	x = 147423723;
	y = 4203;
	ft_ultimate_div_mod(&x, &y);
	printf("%d-%d", x, y);
	return (0);
}
