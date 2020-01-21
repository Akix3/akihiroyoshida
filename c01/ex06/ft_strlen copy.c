/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen copy.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayoshida <ayoshida@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/19 19:25:25 by ayoshida          #+#    #+#             */
/*   Updated: 2020/01/19 20:57:17 by ayoshida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int n;

	n = 0;
	while (str[n] != '\0')
	{
		n++;
	}
	return (n);
}



int	main(void)
{
	int length;

	char a[100] = "42tokyo";
	length = ft_strlen(a);
	printf("%d\n", length);
	return (0);
}
