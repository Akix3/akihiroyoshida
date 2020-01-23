/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy_copy.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayoshida <ayoshida@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/19 22:46:00 by ayoshida          #+#    #+#             */
/*   Updated: 2020/01/23 18:38:06 by ayoshida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

char	*ft_strcpy(char *dest, char *src)
{
	int n;

	n = 0;
	while (src[n] != '\0')
	{
		dest[n] = src[n];
		n++;
	}
	dest[n] = '\0';
	return (dest);
}

int	main(void)
{
	char dest1[10] = "42tokyo";
	char dest2[13] = "42tokyo";
	char src1[] = "424242";
	char src2[] = "123456789012";

	ft_strcpy(dest1, src1);
	strcpy(dest2, src2);
	printf("%s\n", dest1);
	printf("%s\n", dest2);
	return (0);
}
