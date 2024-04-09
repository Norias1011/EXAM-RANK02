#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int start, int end)
{
	int size = 0; 

	if (start > end)
		size = (start - end) + 1;
	else 
		size = (end - start) + 1;
	
	int *result = (int *)malloc(sizeof(int) * size);
	int i = 0;
	while (i < size)
	{
		if (start > end)
		{
			result[i] = start;
			start--;
		}
		else 
		{
			result[i] = start;
			start++;
		}
		i++;
	}
	return (result);
}

