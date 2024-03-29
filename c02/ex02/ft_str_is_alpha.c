/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayoshida <ayoshida@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/20 18:35:22 by ayoshida          #+#    #+#             */
/*   Updated: 2020/01/20 19:10:08 by ayoshida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int n;

	n = 0;
	while (str[n] != '\0')
	{
		if (!((str[n] > 64 && str[n] < 91) || (str[n] > 96 && str[n] < 123)))
		{
			return (0);
		}
		n++;
	}
	return (1);
}
