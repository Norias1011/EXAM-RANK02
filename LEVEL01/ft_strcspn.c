#include <unistd.h>
#include <string.h>

size_t	ft_strcspn(const char *s, const char *reject)
{
	unsigned int i = 0;
	unsigned int j = 0;

	while (s[i])
	{
		j = 0;
		while (reject[j])
		{
			if (s[i] == reject[j])
				return (i);
			j++;
		}
		i++;
	}
	return (i);
}
