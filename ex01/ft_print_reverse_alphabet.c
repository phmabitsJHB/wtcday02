#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void 	ft_print_reverse_alphabet(void)
{
	char b;
	b = 'z';
	while (b >= 'a')
	{
		ft_putchar(b);
		b--;
	}
}

int main()
{
	ft_print_reverse_alphabet();
	return(0);
}
