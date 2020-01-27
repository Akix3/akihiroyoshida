#include "ft_stock_str.h"

int	count(char *src)
{
	int i;

	i = 0;
	while (src[i])
		i++;
	return (i);
}

struct	s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str **dest;
	int num1;
	int num2;

	dest = (t_stock_str *)malloc(sizeof(t_stock_str) * ac + 1);
	num1 = 0;
	while(av[num1])
	{
		num2 = 0;
		while(av[num1][num2])
		{
			
		}
	}
}