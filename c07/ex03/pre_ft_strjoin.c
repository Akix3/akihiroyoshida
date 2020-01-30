/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayoshida <ayoshida@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/25 13:38:25 by ayoshida          #+#    #+#             */
/*   Updated: 2020/01/28 21:04:22 by ayoshida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		count1(char *source)
{
	int number;

	number = 0;
	while (source[number] != '\0')
		number++;
	return (number);
}

int		count2(char **source2)
{
	int number1;
	int number2;
	int counter;

	counter = 0;
	number1 = 0;
	while (source2[number1])
	{
		number2 = 0;
		while (source2[number1][number2] != '\0')
		{
			number2++;
			counter++;
		}
		number1++;
	}
	return (counter);
}

void	ft_copy(char *dest, char *source3)
{
	int n1;
	int n2;

	n1 = 0;
	while (dest[n1] != '\0')
	{
		n1++;
	}
	n2 = 0;
	while (source3[n2] != '\0')
	{
		dest[n1 + n2] = source3[n2];
		n2++;
	}
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*csq;
	int		first;
	int		n;

	n = count2(strs) + (size - 1) * count1(sep);
	csq = (char *)malloc(sizeof(char) * n + 1);
	if (size == 0)
		return (csq);
	first = 0;
	while (first <= n + 1)
	{
		csq[first] = '\0';
		first++;
	}
	first = 0;
	while (strs[first] != '\0')
	{
		ft_copy(csq, strs[first]);
		first++;
		if (strs[first] != '\0')
			ft_copy(csq, sep);
	}
	return (csq);
}
