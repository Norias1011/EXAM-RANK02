#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int isvalid(int ch, int baselen);

int	ft_atoi_base(const char *str, int str_base)
{
	int signal = 1;
	int res = 0;
	int i = 0;
	if (str[i] == '-')
	{
		signal = -1;
		i++;
	}
	while (str[i] && isvalid(str[i], str_base))
    	{
        	res *= str_base;

        	if (str[i] >= '0' && str[i] <= '9')
            		res += str[i] - '0';
        	else if (str[i] >= 'a' && str[i] <= 'f')
            		res += str[i] - 'a' + 10;
        	else if (str[i] >= 'A' && str[i] <= 'F')
            		res += str[i] - 'A' + 10;
        	i++;
	}
    return (res * signal);
}

int isvalid(int ch, int baselen)
{
    char *lcbase = "0123456789abcdef";
    char *ucnase = "0123456789ABCDEF";
    int i = 0;

    while (i < baselen)
    {
        if (ch == lcbase[i] || ch == ucnase[i])
            return (1);
        i++;
    }
    return (0);
}

int main()
{
	int a = ft_atoi_base("--223", 10);
	printf("%d", a);
	return 0;
}
