/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayoshida <ayoshida@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/24 11:59:10 by ayoshida          #+#    #+#             */
/*   Updated: 2020/01/30 12:22:26 by ayoshida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
