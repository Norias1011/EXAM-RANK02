#include <unistd.h>

void	ft_putnbr(int nbr)
{
	char digit;
	if (nbr >= 10)
		ft_putnbr(nbr / 10);
	digit = nbr % 10 + '0';
	write(1, &digit, 1);
}

int main(int ac, char *av[])
{
	int i = 0;
	while (++i < 101)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			write(1, "fizzbuzz", 8);
		}
		else if (i % 3 == 0)
		{
			write(1, "fizz", 4);
		}
		else if (i % 5 == 0)
		{
			write(1, "buzz", 4);
		}
		else
			ft_putnbr(i);
		write(1, "\n", 1);
	}
	return 0;
}
