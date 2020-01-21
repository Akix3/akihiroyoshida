/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp_copy.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayoshida <ayoshida@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/21 17:35:32 by ayoshida          #+#    #+#             */
/*   Updated: 2020/01/21 18:28:23 by ayoshida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int n;

	n = 0;
	while (!(s1[n] == '\0' && s2[n] == '\0'))
	{
		if (s1[n] < s2[n])
		{
			return (-1);
		}
		else if (s1[n] > s2[n])
		{
			return (1);
		}
		n++;
	}
	return (0);
}
