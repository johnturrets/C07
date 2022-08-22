#include <stdio.h>
#include <stdlib.h>

int *ft_range(int min, int max)
{
	unsigned int size = max - min;
	int *matrix = (int*) malloc(sizeof(int) * size);
	int *pmatrix;
	
	if (min >= max)
		return 0;
	pmatrix = matrix;
	while (max-- > min)
		*(pmatrix++) = max;
	return matrix;
}


int main(void)
{
	int *matrix = ft_range(10, 50);
	int i = 0;
	while (i < 40)
	{
		printf("%d\n", matrix[i]);
		i++;
	}
	return 0;
}
