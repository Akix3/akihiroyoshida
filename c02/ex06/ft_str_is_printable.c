/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayoshida <ayoshida@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/20 19:52:52 by ayoshida          #+#    #+#             */
/*   Updated: 2020/01/21 19:24:15 by ayoshida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int n;

	n = 0;
	while (str[n] != '\0')
	{
		if (!(str[n] >= 32 && str[n] <= 126))
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

	printf("%d", ft_str_is_printable(a));
	return (0);
}
