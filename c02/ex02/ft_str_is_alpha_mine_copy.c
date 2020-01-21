/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha_copy.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayoshida <ayoshida@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/20 18:35:22 by ayoshida          #+#    #+#             */
/*   Updated: 2020/01/20 19:41:18 by ayoshida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int n;

	n = 0;
	while ((str[n] > 64 && str[n] < 91) || (str[n] > 96 && str[n] < 123))
	{
		n++;
	}
	if (str[n] == '\0')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

int	main(void)
{
	char a[] = "";

	printf("%d", ft_str_is_alpha(a));
	return (0);
}
