/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayoshida <ayoshida@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/20 19:10:54 by ayoshida          #+#    #+#             */
/*   Updated: 2020/01/20 19:31:30 by ayoshida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int n;

	n = 0;
	while (str[n] != '\0')
	{
		if (!(str[n] >= '0' && str[n] <= '9'))
		{
			return (0);
		}
		n++;
	}
	return (1);
}

int	main(void)
{
	char a[] = "";

	printf("%d", ft_str_is_numeric(a));
	return (0);
}
