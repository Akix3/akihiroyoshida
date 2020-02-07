/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin_copy.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoshida <yoshida@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/25 13:38:25 by ayoshida          #+#    #+#             */
/*   Updated: 2020/02/01 18:26:42 by yoshida          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

#include <stdio.h>

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
	int ii;

	i = ft_strslen(size, strs) + (size - 1) * ft_strlen(sep);
	if (!(csq = (char *)malloc(sizeof(char) * i + 1)))
		return (0);
	ii = 0;
	// while (ii < (i + 1))
	// {
	// 	printf ("%p\n", &csq[ii]);
	// 	ii++;
	// }
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

int		main(void)
{
	char **src;

	char a[100] = "abc";
	char b[100] = "xyz";
	char c[100] = "ABC";
	char d[100] = "XYZ";
	char num[100] = " + ";
	char *result;
	src = malloc(sizeof(char) * 500);

	src[0] = a;
	src[1] = b;
	src[2] = c;
	src[3] = d;

	result = ft_strjoin(4, src, num);

	printf("%s", result);
	return (0);
}
