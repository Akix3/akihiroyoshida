// #include <stdio.h>

// int	ft_strlen(char *str);

// int		main(void)
// {
// 	char str[] = "HELLO";

// 	printf("%d",ft_strlen(str));
// 	return (0);
// }

// #include <stdio.h>

// void	ft_putstr(char *str);

// int		main(void)
// {
// 	char str[] = "HELLO";

// 	ft_putstr(str);
// 	return (0);
// }

#include <stdio.h>
#include <limits.h>

void ft_putnbr(int nb);

int main(void)
{
	ft_putnbr(-9);
	printf("\n");
	ft_putnbr(INT_MAX);
	printf("\n");
	ft_putnbr(9);
	printf("\n");
	ft_putnbr(0);
	printf("\n");
	ft_putnbr(0);
	return (0);
}
