#include <unistd.h>

typedef struct s_point
{
	int	x;
	int	y;
}		t_point;

void	fill(char **tab, char target, t_point size, int row, int col)
{
	if (row < 0 || col < 0 || row >= size.y || col >= size.x)
		return ;
	
	if (tab[row][col] == 'F' || tab[row][col] != target)
		return ;
	tab[row][col] = 'F';

	fill(tab, target, size, row - 1, col);
	fill(tab, target, size, row +1, col);
	fill(tab, target, size, row, col -1);
	fill(tab, target, size, row, col +1);
}

void	flood_fill(char **tab, t_point size, t_point begin)
{
	char target = tab[begin.y][begin.x];

	fill(tab, target, size, begin.y, begin.x);
}
