/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy_copy.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayoshida <ayoshida@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/20 17:08:56 by ayoshida          #+#    #+#             */
/*   Updated: 2020/01/22 11:57:47 by ayoshida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int num;

	num = 0;
	while (src[num] != '\0' && num < n)
	{
		dest[num] = src[num];
		num++;
	}
	while (num < n)
	{
		dest[num] = '\0';
		num++;
	}
	return (dest);
}

int	main(void)
{
	char dest1[20] = "123456789";
	char src1[] = "TokyoTokyo";

	printf("%s\n", dest1);
	ft_strncpy(dest1, src1, 9);
	printf("%s\n", dest1);
}
