#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_print_alphabet(void)
{
	char b;
	b = 'a';
	while (b <= 'z')
	{
		ft_putchar(b);
		b++;
	}
}

int main()
{
	ft_print_alphabet();
	return(0);
}
