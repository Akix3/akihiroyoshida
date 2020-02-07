/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoshida <yoshida@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/21 17:34:56 by ayoshida          #+#    #+#             */
/*   Updated: 2020/02/02 17:41:13 by yoshida          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int n;
	int m;

	if (*to_find == '\0')
		return (str);
	n = 0;
	while (str[n] != '\0')
	{
		m = 0;
		while (str[n + m] == to_find[m])
		{
			m++;
			if (to_find[m] == '\0')
				return (str + (n));
		}
		n++;
	}
	return (0);
}
