/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayoshida <ayoshida@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/24 11:59:10 by ayoshida          #+#    #+#             */
/*   Updated: 2020/01/28 20:49:06 by ayoshida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int diff;
	int count;
	int *result;

	diff = max - min;
	if (diff <= 0)
		return (0);
	result = (int *)malloc(sizeof(int) * diff);
	count = 0;
	while (count <= diff)
	{
		result[count] = min;
		count++;
		min++;
	}
	return (result);
}
