/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayoshida <ayoshida@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/21 17:35:24 by ayoshida          #+#    #+#             */
/*   Updated: 2020/01/22 14:05:55 by ayoshida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int num;

	num = 0;
	while (num < n && (s1[num] != '\0' || s2[num] != '\0'))
	{
		if (s1[num] != s2[num])
			return (s1[num] - s2[num]);
		num++;
	}
	return (0);
}
