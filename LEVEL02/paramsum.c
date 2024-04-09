#include <unistd.h>

void	ft_putnbr(int nbr)
{
	if (nbr > 9)
	{
		ft_putnbr(nbr / 10);
	}
	char i = (nbr % 10) + '0';
	write(1, &i, 1);
}

int main(int ac, char *av[])
{
	if (ac < 2)
		write(1, "0\n", 2);
	else
	{
		int result = ac - 1;
		ft_putnbr(result);
		write(1, "\n", 1);
	}
	return (0);
}
