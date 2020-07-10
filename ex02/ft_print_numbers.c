#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_numbers(void)
{
	char b;
	b = '0';
	while (b <= '9')
	{
		ft_putchar(b);
		b++;
	}
}

int main()
{
	ft_print_numbers();
	return(0);
}
