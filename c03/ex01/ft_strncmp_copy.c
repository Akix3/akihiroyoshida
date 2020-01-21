/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayoshida <ayoshida@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/21 17:35:24 by ayoshida          #+#    #+#             */
/*   Updated: 2020/01/21 18:31:34 by ayoshida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int num;

	num = 0;
	while (num <= (n - 1) && (s1[num] != '\0' || s2[num] != '\0'))
	{
		if (s1[num] < s2[num])
		{
			return (-1);
		}
		else if (s1[num] > s2[num])
		{
			return (1);
		}
		num++;
	}
	return (0);
}

int main(void)
{
	char c1[] = "42Tokyo";
	char c2[] = "42Tokyo";

	printf("%d\n", ft_strncmp(c1, c2, 10));
	return 0;
}
