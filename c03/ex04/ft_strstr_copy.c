/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr_copy.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoshida <yoshida@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/21 17:34:56 by ayoshida          #+#    #+#             */
/*   Updated: 2020/02/02 17:41:25 by yoshida          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <unistd.h>

char	*ft_strstr(char *str, char *to_find)
{
	int n;
	int m;

	if (*to_find == '\0')
		return (str);
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
	char src[] = "Hello world woRld";
	char find[] = "woRld";
	char *c;
	char *d;

	c = ft_strstr(src, find);
	printf("%s", c);
	printf("\n");
	d = strstr(src, find);
	printf("%s", d);
	return (0);
}
