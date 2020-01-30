/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup_copy.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayoshida <ayoshida@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/23 19:49:03 by ayoshida          #+#    #+#             */
/*   Updated: 2020/01/29 20:29:17 by ayoshida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		count(char *str)
{
	int n;

	n = 0;
	while (str[n] != '\0')
		n++;
	return (n);
}

char	*ft_strdup(char *src)
{
	int		i;
	char	*dest;

	dest = (char *)malloc(sizeof(char) * (count(src) + 1));
	if (dest == NULL)
		return (NULL);
	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int		main(void)
{
	char a[10] = "123456789";
	char *b;

	b = ft_strdup(a);

	printf("%s", b);
	return (0);
}
