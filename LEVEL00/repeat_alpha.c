#include <unistd.h>

int main(int ac, char *av[])
{
	if (ac == 2)
	{
		int i = 0;
		int index = 0;
		while (av[1][i])
		{
			if (av[1][i] >= 97 && av[1][i] <= 122)
			{
				index = 0;
				while (index < av[1][i] - 96)
				{
					write(1, &av[1][i], 1);
					index++;
				}
			}
			else if (av[1][i] >= 65 && av[1][i] <= 90)
			{
				index = 0;
				while (index < av[1][i] - 64)
				{
					write(1, &av[1][i], 1);
					index++;
				}
			}
			else
				write(1, &av[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return 0;
}
