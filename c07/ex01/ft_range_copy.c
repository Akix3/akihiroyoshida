/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range_copy.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayoshida <ayoshida@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/24 11:59:10 by ayoshida          #+#    #+#             */
/*   Updated: 2020/01/30 12:22:29 by ayoshida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int count;
	int *result;

	if (max <= min)
		return (0);
	result = (int *)malloc(sizeof(int) * (max - min));
	if (result == 0)
		return (0);
	count = 0;
	while (min < max)
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
	int min = -100;
	int *copy = ft_range(min, max);
	int num;

	num = 0;
	while (num < (max - min))
	{
		printf("%d ", copy[num]);
		num++;
	}
	return (0);
}
