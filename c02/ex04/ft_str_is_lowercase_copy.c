/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayoshida <ayoshida@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/20 19:32:47 by ayoshida          #+#    #+#             */
/*   Updated: 2020/01/20 19:40:52 by ayoshida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int n;

	n = 0;
	while (str[n] != '\0')
	{
		if (!(str[n] >= 'a' && str[n] <= 'z'))
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

	printf("%d", ft_str_is_lowercase(a));
	return (0);
}
