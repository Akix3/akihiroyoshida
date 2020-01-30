/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayoshida <ayoshida@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/21 17:35:10 by ayoshida          #+#    #+#             */
/*   Updated: 2020/01/21 19:05:45 by ayoshida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
