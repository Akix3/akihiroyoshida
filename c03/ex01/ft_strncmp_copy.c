/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp_copy.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayoshida <ayoshida@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/21 17:35:24 by ayoshida          #+#    #+#             */
/*   Updated: 2020/01/22 14:05:46 by ayoshida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int num;

	num = 0;
	while (num < n && (s1[num] != '\0' || s2[num] != '\0'))
	{
		if (s1[num] != s2[num])
			return (s1[num] - s2[num]);
		num++;
	}
	return (0);
}

int	main(void)
{
	char c1[] = "42Toky0";
	char c2[] = "42TokyO";

	printf("%d\n", ft_strncmp(c1, c2, 7));
	return (0);
	char i = 'o';
	char ii = '0';
}
