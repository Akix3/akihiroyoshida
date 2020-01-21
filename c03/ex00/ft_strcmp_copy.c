/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayoshida <ayoshida@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/21 17:35:32 by ayoshida          #+#    #+#             */
/*   Updated: 2020/01/21 18:27:46 by ayoshida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int n;

	n = 0;
	while (!(s1[n] == '\0' && s2[n] == '\0'))
	{
		if (s1[n] < s2[n])
		{
			return (-1);
		}
		else if (s1[n] > s2[n])
		{
			return (1);
		}
		n++;
	}
	return (0);
}

int main(void)
{
	char c1[] = "42tokyo";
	char c2[] = "42Tokyo";

	printf("%d\n", ft_strcmp(c1, c2));
	return 0;
}
