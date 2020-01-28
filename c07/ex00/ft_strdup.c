/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayoshida <ayoshida@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/23 19:49:03 by ayoshida          #+#    #+#             */
/*   Updated: 2020/01/28 21:03:39 by ayoshida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		count(char *str)
{
	int n;

	n = 0;
	while (str[n] != '\0')
		n++;
	return (n);
}

char	*ft_strdup(char *src)
{
	int		num1;
	int		num2;
	char	*dest;

	num1 = count(src);
	dest = (char *)malloc(sizeof(char) * (num1 + 1));
	if (dest == NULL)
		return (NULL);
	num2 = 0;
	while (src[num2] != '\0')
	{
		dest[num2] = src[num2];
		num2++;
	}
	dest[num2] = '\0';
	return (dest);
}
