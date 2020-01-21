/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase_copy.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayoshida <ayoshida@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/20 20:02:02 by ayoshida          #+#    #+#             */
/*   Updated: 2020/01/20 20:25:11 by ayoshida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strupcase(char *str)
{
	int n;
	int offset;

	n = 0;
	offset = ('a' - 'A');
	while (str[n] != '\0')
	{
		if (str[n] >= 'a' && str[n] <= 'z')
		{
			str[n] -= offset;
		}
		n++;
	}
	return (str);
}

int	main(void)
{
	char a[] = "alkjhfdADS666";
	printf("%s", ft_strupcase(a));
	return (0);
}
