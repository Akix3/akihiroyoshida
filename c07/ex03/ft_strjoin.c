/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoshida <yoshida@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/25 13:38:25 by ayoshida          #+#    #+#             */
/*   Updated: 2020/02/01 18:25:39 by yoshida          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
		i++;
	return (i);
}

int		ft_strslen(int size, char **src)
{
	int i1;
	int i2;
	int n;

	n = 0;
	i1 = 0;
	while (i1 < size)
	{
		i2 = 0;
		while (src[i1][i2] != '\0')
		{
			i2++;
			n++;
		}
		i1++;
	}
	return (n);
}

char	*ft_strcat(char *dest, char *src)
{
	int i1;
	int i2;

	i1 = 0;
	while (dest[i1] != '\0')
		i1++;
	i2 = 0;
	while (src[i2] != '\0')
	{
		dest[i1 + i2] = src[i2];
		i2++;
	}
	dest[i1 + i2] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*csq;
	int		i;
	
	i = ft_strslen(size, strs) + (size - 1) * ft_strlen(sep);
	if (!(csq = (char *)malloc(sizeof(char) * i + 1)))
		return (0);
	if (size == 0)
		return (csq);
	*csq = 0;
	i = 0;
	while (i < size)
	{
		ft_strcat(csq, strs[i]);
		i++;
		if (i < size)
			ft_strcat(csq, sep);
	}
	return (csq);
}
