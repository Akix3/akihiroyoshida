#include <unistd.h>

void	ft_putnbr(int nb)
{
	char c;

	if(nb == -2147483648)
		write(1, "-2147483648", 11);
	if(nb < 0)
	{
		write(1, "-", 1);
		nb *= -1;
	}
	if (nb == 0)
		write(1, "0", 1);
	if (nb > 0)
	{
		c = nb % 10 + '0';
		nb /= 10;
		if (nb != 0)
			ft_putnbr(nb);
		write(1, &c, 1);
	}
}

int	main(void)
{
	ft_putnbr(123);
	return (0);
}