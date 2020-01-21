/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayoshida <ayoshida@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/20 20:32:41 by ayoshida          #+#    #+#             */
/*   Updated: 2020/01/20 21:14:53 by ayoshida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int n;
	int where;
	int offset;

	n = 0;
	offset = ('a' - 'A');
	while (str[n] != '\0')
	{
		if (!(str[n - 1] >= 'A' && str[n - 1] <= 'Z') &&
		!(str[n - 1] >= 'a' && str[n - 1] <= 'z'))
			where = 0;
		if (str[n] >= 'a' && str[n] <= 'z' && where == 0)
			str[n] -= offset;
		else if (str[n] >= 'A' && str[n] <= 'Z' && where != 0)
			str[n] += offset;
		where++;
		n++;
	}
	return (str);
}

int	main(void)
{
	char a[] = "salut, comment tuvas ? 42mots quarante-deux; cinquante+et+un";
	printf("%s", ft_strcapitalize(a));
	return (0);
}
