/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayoshida <ayoshida@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/21 21:56:40 by ayoshida          #+#    #+#             */
/*   Updated: 2020/01/21 22:03:35 by ayoshida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_putstr(char *str)
{
	int n;

	n = 0;
	while (str[n] != '\0')
	{
		n++;
	}
	write(1, str, n);
}

int	main(void)
{
	char a[] = "123456789";
	ft_putstr(a);
}
