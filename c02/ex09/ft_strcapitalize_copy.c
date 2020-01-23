/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize_copy.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayoshida <ayoshida@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/20 20:32:41 by ayoshida          #+#    #+#             */
/*   Updated: 2020/01/22 12:55:37 by ayoshida         ###   ########.fr       */
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
	char a00[] = "salut, comment tuvas ? 42mots quarante-deux; cinquante+et+un";
	char a01[] = "salut, comment tuvas ? 42mots ARTS";
	char a02[] = "salut, comment tuvas ? 42RDSAFAmots ARTS";

	printf("%s\n", ft_strcapitalize(a00));
	printf("%s\n", ft_strcapitalize(a01));
	printf("%s\n", ft_strcapitalize(a02));
	return (0);
}
