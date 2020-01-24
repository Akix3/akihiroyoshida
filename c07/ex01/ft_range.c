/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayoshida <ayoshida@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/24 11:59:10 by ayoshida          #+#    #+#             */
/*   Updated: 2020/01/24 13:00:24 by ayoshida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int diff;
	int count;
	int *result;

	diff = max - min;
	if (min >= max)
		return (0);
	result = (int *)malloc(sizeof(int) * diff + 1);
	count = 0;
	while (count <= diff)
	{
		result[count] = min;
		count++;
		min++;
	}
	return (result);
}

int	main(void)
{
	int max = 100;
	int min = 30;
	int *copy = ft_range(min, max);
	int num;

	num = 0;
	while (num < (max - min))
	{
		printf("%d\n", copy[num]);
		num++;
	}
	return (0);
}
