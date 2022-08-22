#include <stdlib.h>

int ft_ultimate_range(int **range, int min, int max)
{
	int	*prange;
	int	i;
	unsigned int	size;
	if (min >= max)
	{
		*range = NULL;
		return -1;
	}
	size = max - min;
	i = 0;
	*range = (int*) malloc(sizeof(int) * (max - min));
	prange = *range;
	while (min < max)
	{
		*prange = min;
		prange++;
		min++;
	}
	return size;
}


/*
int main(void)
{
	int **range;
	int size = ft_ultimate_range(range, 10, 50);
	int *prange;
	int i;
	prange = *range;
	
	while (size--)
	{
		prange++;
		i++;
	}
	return 0;
}
*/
