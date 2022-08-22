#include <stdlib.h>
#include <unistd.h>

void ft_putchar(unsigned char c)
{
	write(1, &c, 1);
}

int main()
{
	ft_putchar(128);

	ft_putchar(199);
	ft_putchar(200);
	ft_putchar(201);
	
	return 0;
}
