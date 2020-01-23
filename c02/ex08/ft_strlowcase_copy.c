/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase_copy.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayoshida <ayoshida@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/20 20:29:54 by ayoshida          #+#    #+#             */
/*   Updated: 2020/01/22 13:07:57 by ayoshida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int n;
	int offset;

	n = 0;
	offset = ('a' - 'A');
	while (str[n] != '\0')
	{
		if (str[n] >= 'A' && str[n] <= 'Z')
		{
			str[n] += offset;
		}
		n++;
	}
	return (str);
}

int	main(void)
{
	char a[] = "ASDFAFGasdfh19842";
	printf("%s", ft_strlowcase(a));
	return (0);
}
