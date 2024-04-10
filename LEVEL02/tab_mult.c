#include <unistd.h>

int 	ft_atoi(char *str)
{
	int num = 0;
	int i = 0;

	while (str[i])
	{
		num = num * 10;
		num = num + str[i] - '0';
		i++;
	}
	return (num);
}

void	ft_putnbr(int n)
{
	if (n >= 10)
	{
		ft_putnbr(n / 10);
	}
	char digit = n % 10 + '0';
	write(1, &digit, 1);
}

int main(int ac, char *av[])
{
	if (ac == 2)
	{
		int res = 0;
		int num = ft_atoi(av[1]);
		int i = 1;
		while (i <= 9)
		{
			res = (i * num);
			ft_putnbr(i);
			write(1, " x ", 3);
			ft_putnbr(num);
			write(1, " = ", 3);
			ft_putnbr(res);
			write(1, "\n", 1);
			i++;
		}
	}
	else
		write(1, "\n", 1);
	return 0;
}
