#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

char **ft_split(char *str)
{
	int i = 0;
	char **tab;
	int wc = 0;
	int k = 0;
	int j = 0;
	int start = 0;
	int end = 0;
	while (str[i])
	{
		while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
			i++;
		if (str[i])
			wc++;
		while (str[i] && (str[i] != ' ' && str[i] != '\t' && str[i] != '\n'))
			i++;
	}
	tab = (char **)malloc(sizeof(char *) * wc + 1);
	i = 0;
	while (str[i])
	{
		while (str[i] && (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'))
			i++;
		start = i;
		while (str[i] && (str[i] != ' ' && str[i] != '\t' && str[i] != '\n'))
			i++;
		end = i;
		if (start < end)
		{
			tab[k] = (char *)malloc(sizeof(char) * ((end - start) + 1));
			j = 0;
			while (start < end)
			{
				tab[k][j] = str[start];
				j++;
				start++;
			}
			tab[k][j] = '\0';
			k++;
		}
	}
	tab[k] = 0;
	return (tab);
}
