/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayoshida <ayoshida@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/22 22:12:44 by ayoshida          #+#    #+#             */
/*   Updated: 2020/01/22 22:50:59 by ayoshida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

// int	ft_fibonacci(int index)
// {
// 	if (index < 0)
// 		return (-1);
// 	else if (index == 0) 
// 		return (0);
// 	else if (index == 1)
// 		return (0);
// 	else if (index == 2)
// 		return (1);
// 	return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
// }

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	else if (index == 0 || index == 1)
		return (index);
	return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}

int	main(void)
{
	printf("%d", ft_fibonacci(10));
	return (0);
}