/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayoshida <ayoshida@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/21 17:34:56 by ayoshida          #+#    #+#             */
/*   Updated: 2020/01/22 17:49:35 by ayoshida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int n;
	int m;

	n = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[n] != '\0')
	{
		m = 0;
		while (str[n + m] == to_find[m])
		{
			m++;
			if (to_find[m] == '\0')
				return (str + n);
		}
		n++;
	}
	return (0);
}
