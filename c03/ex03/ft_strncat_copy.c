/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayoshida <ayoshida@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/21 17:35:10 by ayoshida          #+#    #+#             */
/*   Updated: 2020/01/21 19:03:30 by ayoshida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int nd;
	unsigned int ns;

	nd = 0;
	ns = 0;
	while (dest[nd] != '\0')
		nd++;
	while (ns < nb && src[ns] != '\0')
	{
		dest[nd + ns] = src[ns];
		ns++;
	}
	dest[nd + ns] = '\0';
	return (dest);
}

int	main(void)
{
	char dest1[30] = "12345";
	char src1[30] = "67890123456789";
	printf("%s", ft_strncat(dest1, src1, 1));
	return 0;
}
