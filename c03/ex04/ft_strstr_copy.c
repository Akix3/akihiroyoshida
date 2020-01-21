/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayoshida <ayoshida@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/21 17:34:56 by ayoshida          #+#    #+#             */
/*   Updated: 2020/01/21 18:23:03 by ayoshida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

char	*ft_strstr(char *str, char *to_find)
{
	int n;
	int m;

	n = 0;
	while (str[n] != '\0')
	{
		m = 0;
		while (str[n + m] == to_find[m])
		{
			m++;
			if (to_find[m] == '\0')
				return (str + (n));
		}
		n++;
	}
	return (0);
}

int	main(void)
{
	char src[] = "abcghi12jklmnop abcdefghijkl123mn";
	char find[] = "123";
	char *c;

	c = ft_strstr(src, find);
	printf("%s", c);
	return (0);
}
