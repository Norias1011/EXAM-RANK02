#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int main(int ac, char *av[])
{
	if (ac == 3)
	{
		int lookup[256] = {};

		int i = 0;
		while (av[1][i])
		{
			lookup[av[1][i]] = 1;
			i++;
		}
		i = 0;
		while (av[2][i])
		{
			lookup[av[2][i]] = 1;
			i++;
		}
		i = 0;
		while (av[1][i])
		{
			if (lookup[av[1][i]])
			{
				write(1, &av[1][i], 1);
				lookup[av[1][i]] = 0;
			}
			i++;
		}
		i = 0;
		while (av[2][i])
		{
			if (lookup[av[2][i]])
			{
				write(1, &av[2][i], 1);
				lookup[av[2][i]] = 0;
			}
			i++;
		}
	}
	write(1, "\n", 1);
}
