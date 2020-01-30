/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayoshida <ayoshida@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/21 17:35:18 by ayoshida          #+#    #+#             */
/*   Updated: 2020/01/21 19:30:38 by ayoshida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int nd;
	int ns;

	nd = 0;
	ns = 0;
	while (dest[nd] != '\0')
	{
		nd++;
	}
	while (src[ns] != '\0')
	{
		dest[nd + ns] = src[ns];
		ns++;
	}
	dest[nd + ns] = '\0';
	return (dest);
}
