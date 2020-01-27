/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayoshida <ayoshida@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/24 20:52:28 by ayoshida          #+#    #+#             */
/*   Updated: 2020/01/27 18:19:52 by ayoshida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int count;

	if (max <= min)
	{
		*range = 0;
		return (0);
	}
	*range = (int *)malloc(sizeof(int) * (max - min));
	if (*range)
		return (-1);
	count = 0;
	while (min < max)
	{
		(*range)[count] = min;
		count++;
		min++;
	}
	return (count);
}

int	main(void)
{
	int *i;

	printf("%d\n", ft_ultimate_range(&i, 11, 51));

	int num;

	num = 0;
	while (num < (51 - 11))
	{
		printf("%d\n", i[num]);
		num++;
	}

	return (0);
}
