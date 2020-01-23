/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayoshida <ayoshida@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/20 20:29:54 by ayoshida          #+#    #+#             */
/*   Updated: 2020/01/22 13:09:41 by ayoshida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int n;
	int offset;

	n = 0;
	offset = ('a' - 'A');
	while (str[n] != '\0')
	{
		if (str[n] >= 'A' && str[n] <= 'Z')
		{
			str[n] += offset;
		}
		n++;
	}
	return (str);
}
