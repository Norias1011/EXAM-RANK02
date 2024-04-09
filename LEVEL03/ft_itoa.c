#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

char	*ft_itoa(int nbr)
{
	long n = nbr;
	int size = 0;
	if (n <= 0)
		size++;
	while (n)
	{
		n /= 10;
		size++;
	}
	char *result = (char *)malloc(sizeof(char) * (size + 1));
	if (result == NULL)
		return NULL;
	result[size] = '\0';
	n = nbr;
	if (n == 0)
	{
		result[0] = '0';
		return (result);
	}
	if (n < 0)
	{
		result[0] = '-';
		n *= -1;
	}
	while (n)
	{
		result[--size] = n % 10 + '0';
		n /= 10;
	}
	return result; 
}
